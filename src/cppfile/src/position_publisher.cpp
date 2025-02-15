#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <moveit/planning_scene_interface/planning_scene_interface.h>
#include <geometry_msgs/msg/pose.hpp>
#include <ur_robotiq/srv/ur_mover_service.hpp>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>

using namespace std::chrono_literals;

class UR3eMoveItServer : public rclcpp::Node
{
public:
    UR3eMoveItServer() : Node("ur3e_moveit_server")
    {
        // Initialize service
        service_ = create_service<ur_robotiq::srv::UrMoverService>(
            "ur3e_moveit",
            std::bind(&UR3eMoveItServer::handleServiceRequest, this,
                     std::placeholders::_1, std::placeholders::_2));

        RCLCPP_INFO(get_logger(), "Ready to plan trajectories");
    }

    void initialize()
    {
        // Initialize MoveIt components after construction
        move_group_arm_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
            shared_from_this(),  // Now safe to use shared_from_this()
            "arm"
        );
        
        planning_scene_interface_ = std::make_shared<moveit::planning_interface::PlanningSceneInterface>();

        // Add ground collision object
        addGroundCollision();
    }

private:
    void addGroundCollision()
    {
        // Add ground plane to planning scene
        std::vector<moveit_msgs::msg::CollisionObject> collision_objects;
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

        collision_objects.push_back(ground);
        planning_scene_interface_->applyCollisionObjects(collision_objects);
    }

    moveit::planning_interface::MoveGroupInterface::Plan planTrajectory(
        const geometry_msgs::msg::Pose& target_pose,
        const std::vector<double>& start_joint_angles)
    {
        // Set start state
        moveit::core::RobotState start_state(*move_group_arm_->getCurrentState());
        start_state.setJointGroupPositions("arm", start_joint_angles);
        move_group_arm_->setStartState(start_state);

        // Set pose target
        move_group_arm_->setPoseTarget(target_pose);

        // Plan trajectory
        moveit::planning_interface::MoveGroupInterface::Plan plan;
        auto success = (move_group_arm_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);

        if (!success)
        {
            throw std::runtime_error("Failed to plan trajectory");
        }

        return plan;
    }

    void handleServiceRequest(
        const std::shared_ptr<ur_robotiq::srv::UrMoverService::Request> request,
        const std::shared_ptr<ur_robotiq::srv::UrMoverService::Response> response)
    {
        RCLCPP_INFO(get_logger(), "Received service request");

        // Convert fixed-size array to vector
        const std::vector<double> start_joints(
            request->joints_input.joints.begin(),
            request->joints_input.joints.end()
        );

        const geometry_msgs::msg::Pose pick_pose = request->pick_pose;
        const std::vector<double> sideways_offsets = {0.05, -0.05, 0.10, -0.10};

        bool planning_succeeded = false;
        geometry_msgs::msg::Pose target_pose;
        moveit::planning_interface::MoveGroupInterface::Plan pre_grasp_plan;

        // Try direct approach first
        try
        {
            pre_grasp_plan = planTrajectory(pick_pose, start_joints);
            target_pose = pick_pose;
            planning_succeeded = true;
            RCLCPP_INFO(get_logger(), "Direct plan succeeded");
        }
        catch (const std::exception& e)
        {
            RCLCPP_WARN(get_logger(), "Direct plan failed: %s. Trying offsets...", e.what());
        }

        // Try sideways offsets if direct approach failed
        if (!planning_succeeded)
        {
            for (const auto offset : sideways_offsets)
            {
                try
                {
                    geometry_msgs::msg::Pose adjusted_pose = pick_pose;
                    adjusted_pose.position.x += offset;
                    
                    RCLCPP_INFO(get_logger(), "Trying offset: %.2f", offset);
                    pre_grasp_plan = planTrajectory(adjusted_pose, start_joints);
                    target_pose = adjusted_pose;
                    planning_succeeded = true;
                    RCLCPP_INFO(get_logger(), "Offset plan succeeded with: %.2f", offset);
                    break;
                }
                catch (const std::exception& e)
                {
                    RCLCPP_WARN(get_logger(), "Offset %.2f failed: %s", offset, e.what());
                }
            }
        }

        if (!planning_succeeded)
        {
            RCLCPP_ERROR(get_logger(), "All planning attempts failed");
            return;
        }

        // Plan grasp trajectory
        try
        {
            geometry_msgs::msg::Pose grasp_pose = target_pose;
            grasp_pose.position.z -= 0.05;

            // Get final joint positions from pre-grasp plan
            const auto& last_point = pre_grasp_plan.trajectory_.joint_trajectory.points.back();
            std::vector<double> grasp_start_joints(
                last_point.positions.begin(),
                last_point.positions.end());

            auto grasp_plan = planTrajectory(grasp_pose, grasp_start_joints);

            // Add plans to response
            response->trajectories.push_back(pre_grasp_plan.trajectory_);
            response->trajectories.push_back(grasp_plan.trajectory_);
            RCLCPP_INFO(get_logger(), "Successfully planned both trajectories");
        }
        catch (const std::exception& e)
        {
            RCLCPP_ERROR(get_logger(), "Grasp planning failed: %s", e.what());
        }
    }

    // MoveIt components
    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_arm_;
    std::shared_ptr<moveit::planning_interface::PlanningSceneInterface> planning_scene_interface_;
    rclcpp::Service<ur_robotiq::srv::UrMoverService>::SharedPtr service_;
};

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<UR3eMoveItServer>();
    node->initialize();  // Initialize MoveIt components after construction
    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(node);
    executor.spin();
    rclcpp::shutdown();
    return 0;
}