#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include "unity_robotics_demo_msgs/msg/pos_rot.hpp" // Replace 'unity_robotics_demo_msgs' with your actual package name

class UR3eMotionController : public rclcpp::Node {
public:
    UR3eMotionController() : Node("ur3e_motion_controller") {
        // Subscriber to listen for position and orientation updates
        subscription_ = this->create_subscription<unity_robotics_demo_msgs::msg::PosRot>(
            "pos_rot", 10, 
            std::bind(&UR3eMotionController::posRotCallback, this, std::placeholders::_1));
    }

private:
    void posRotCallback(const unity_robotics_demo_msgs::msg::PosRot::SharedPtr msg) {
        // Convert incoming message to geometry_msgs::msg::Pose
        geometry_msgs::msg::Pose target_pose;
        target_pose.position.x = msg->pos_x;
        target_pose.position.y = msg->pos_y;
        target_pose.position.z = msg->pos_z;

        target_pose.orientation.x = msg->rot_x;
        target_pose.orientation.y = msg->rot_y;
        target_pose.orientation.z = msg->rot_z;
        target_pose.orientation.w = msg->rot_w;

        // Ensure the quaternion is normalized (valid rotation)
        normalizeQuaternion(target_pose.orientation);

        RCLCPP_INFO(this->get_logger(), 
                    "Received pose: Position (%f, %f, %f), Orientation (%f, %f, %f, %f)",
                    target_pose.position.x, target_pose.position.y, target_pose.position.z,
                    target_pose.orientation.x, target_pose.orientation.y, 
                    target_pose.orientation.z, target_pose.orientation.w);

        // Move the robot to the received pose
        moveRobotToPose(target_pose);
    }

    // Normalize quaternion to avoid invalid rotations
    void normalizeQuaternion(geometry_msgs::msg::Quaternion& quat) {
        double norm = std::sqrt(quat.x * quat.x +
                                quat.y * quat.y +
                                quat.z * quat.z +
                                quat.w * quat.w);
        if (norm > 0) {
            quat.x /= norm;
            quat.y /= norm;
            quat.z /= norm;
            quat.w /= norm;
        } else {
            // Default to no rotation if quaternion is invalid
            quat.x = 0.0;
            quat.y = 0.0;
            quat.z = 0.0;
            quat.w = 1.0;
        }
    }

    void moveRobotToPose(const geometry_msgs::msg::Pose& target_pose) {
        // Initialize MoveGroupInterface for the UR manipulator
        static const std::string ARM_GROUP = "ur_manipulator";
        auto arm_move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(shared_from_this(), ARM_GROUP);

        // Set the target pose
        arm_move_group->setPoseTarget(target_pose);

        // Plan motion
        moveit::planning_interface::MoveGroupInterface::Plan arm_plan;
        bool arm_plan_success = (arm_move_group->plan(arm_plan) == moveit::core::MoveItErrorCode::SUCCESS);

        if (arm_plan_success) {
            RCLCPP_INFO(this->get_logger(), "Planning successful. Executing...");
            auto execution_result = arm_move_group->execute(arm_plan);
            if (execution_result == moveit::core::MoveItErrorCode::SUCCESS) {
                RCLCPP_INFO(this->get_logger(), "Motion executed successfully.");
            } else {
                RCLCPP_ERROR(this->get_logger(), "Execution failed.");
            }
        } else {
            RCLCPP_ERROR(this->get_logger(), "Planning failed.");
        }
    }

    rclcpp::Subscription<unity_robotics_demo_msgs::msg::PosRot>::SharedPtr subscription_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<UR3eMotionController>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
