#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <ur_robotiq/srv/ur_mover_service.hpp>

using namespace std::chrono_literals;

class UR3eMoveItServer : public rclcpp::Node
{
public:
    UR3eMoveItServer() : Node("ur3e_moveit_server")
    {
        // Initialize the service
        service_ = create_service<ur_robotiq::srv::UrMoverService>(
            "ur3e_moveit",
            std::bind(&UR3eMoveItServer::handle_service_request, this,
                     std::placeholders::_1, std::placeholders::_2));

        RCLCPP_INFO(get_logger(), "UR3e MoveIt Server initialized and ready");
    }

    void initialize()
    {
        // Initialize MoveGroupInterface for the arm
        move_group_arm_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
            shared_from_this(), "ur_manipulator");

        // Initialize PlanningSceneInterface
        planning_scene_interface_ = std::make_shared<moveit::planning_interface::PlanningSceneInterface>();

        // Configure planning parameters
        move_group_arm_->setPlanningTime(20.0);
        move_group_arm_->setNumPlanningAttempts(5);
        move_group_arm_->setMaxVelocityScalingFactor(0.5);
        move_group_arm_->setMaxAccelerationScalingFactor(0.3);

        // Add ground collision object
        addGroundCollision();

        // Set joint names according to the robot configuration
        joint_names_ = {
            "shoulder_pan_joint", 
            "shoulder_lift_joint",
            "elbow_joint",
            "wrist_1_joint",
            "wrist_2_joint",
            "wrist_3_joint"
        };
    }

private:
    // Add a ground collision object to the planning scene
    void addGroundCollision()
    {
        moveit_msgs::msg::CollisionObject ground;
        ground.id = "ground";
        ground.header.frame_id = "world";
        ground.primitives.resize(1);
        ground.primitives[0].type = shape_msgs::msg::SolidPrimitive::BOX;
        ground.primitives[0].dimensions = {2.0, 2.0, 0.02};

        geometry_msgs::msg::Pose ground_pose;
        ground_pose.position.z = -0.072;
        ground.primitive_poses.push_back(ground_pose);
        ground.operation = moveit_msgs::msg::CollisionObject::ADD;

        std::vector<moveit_msgs::msg::CollisionObject> collision_objects = {ground};
        planning_scene_interface_->applyCollisionObjects(collision_objects);

        RCLCPP_INFO(get_logger(), "Added ground collision object");
    }

    // Handle the service request
    void handle_service_request(
        const std::shared_ptr<ur_robotiq::srv::UrMoverService::Request> request,
        const std::shared_ptr<ur_robotiq::srv::UrMoverService::Response> response)
    {
        RCLCPP_INFO(get_logger(), "Received new motion request");

        // Stop any ongoing motion and clear previous targets
        move_group_arm_->stop();
        move_group_arm_->clearPoseTargets();

        // Validate joint input
        if (request->joints_input.joints.size() != 6) {
            RCLCPP_ERROR(get_logger(), "Invalid joint input size. Expected 6, got %zu", request->joints_input.joints.size());
            return;
        }

        std::vector<double> joint_positions(request->joints_input.joints.begin(), request->joints_input.joints.end());

        // Step 1: Move to the specified joint positions
        if (!moveToJointPositions(joint_positions)) {
            RCLCPP_ERROR(get_logger(), "Failed to move to joint positions");
            return;
        }

        // Step 2: Move to the target pose and return the final trajectory
        if (!moveToTargetPose(request->pick_pose, response)) {
            RCLCPP_ERROR(get_logger(), "Failed to move to target pose");
        }
    }

    // Move to the specified joint positions
    bool moveToJointPositions(const std::vector<double>& joint_positions)
    {
        RCLCPP_INFO(get_logger(), "Moving to specified joint positions");
        move_group_arm_->setJointValueTarget(joint_positions);

        moveit::planning_interface::MoveGroupInterface::Plan joint_plan;
        auto joint_plan_result = move_group_arm_->plan(joint_plan);

        if (joint_plan_result != moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_ERROR(get_logger(), "Joint motion planning failed with error code: %d", joint_plan_result.val);
            return false;
        }

        auto joint_execute_result = move_group_arm_->execute(joint_plan);
        if (joint_execute_result != moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_ERROR(get_logger(), "Joint motion execution failed with error code: %d", joint_execute_result.val);
            return false;
        }

        RCLCPP_INFO(get_logger(), "Joint motion execution completed");
        return true;
    }

    // Move to the target pose and return the final trajectory
    bool moveToTargetPose(const geometry_msgs::msg::Pose& target_pose,
                          const std::shared_ptr<ur_robotiq::srv::UrMoverService::Response> response)
    {
        RCLCPP_INFO(get_logger(), "Moving to target pose");

        move_group_arm_->setPoseTarget(target_pose);

        moveit::planning_interface::MoveGroupInterface::Plan pose_plan;
        auto pose_plan_result = move_group_arm_->plan(pose_plan);

        if (pose_plan_result != moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_ERROR(get_logger(), "Pose motion planning failed with error code: %d", pose_plan_result.val);
            return false;
        }

        // Retry execution up to 3 times
        int retry_count = 3;
        while (retry_count > 0) {
            auto pose_execute_result = move_group_arm_->execute(pose_plan);
            if (pose_execute_result == moveit::core::MoveItErrorCode::SUCCESS) {
                RCLCPP_INFO(get_logger(), "Pose motion execution completed");
                response->trajectories.push_back(pose_plan.trajectory_);
                return true;
            } else {
                RCLCPP_WARN(get_logger(), "Pose motion execution failed. Retries left: %d", retry_count);
                retry_count--;
            }
        }

        RCLCPP_ERROR(get_logger(), "Pose motion execution failed after retries");
        return false;
    }

    // Member variables
    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_arm_;
    std::shared_ptr<moveit::planning_interface::PlanningSceneInterface> planning_scene_interface_;
    rclcpp::Service<ur_robotiq::srv::UrMoverService>::SharedPtr service_;
    std::vector<std::string> joint_names_;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<UR3eMoveItServer>();
    node->initialize();
    
    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(node);
    executor.spin();
    
    rclcpp::shutdown();
    return 0;
}
