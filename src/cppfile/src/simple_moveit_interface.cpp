#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include <geometry_msgs/msg/pose.hpp>

void move_robot_to_pose(const std::shared_ptr<rclcpp::Node>& node,
                        const geometry_msgs::msg::Pose& target_pose) {
    // Initialize MoveGroupInterface for the UR manipulator
    static const std::string ARM_GROUP = "ur_manipulator";
    auto arm_move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node, ARM_GROUP);

    // Set the target pose
    arm_move_group->setPoseTarget(target_pose);

    // Plan motion
    moveit::planning_interface::MoveGroupInterface::Plan arm_plan;
    bool arm_plan_success = (arm_move_group->plan(arm_plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (arm_plan_success) {
        RCLCPP_INFO(node->get_logger(), "Planning successful. Executing...");
        auto execution_result = arm_move_group->execute(arm_plan);
        if (execution_result == moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_INFO(node->get_logger(), "Motion executed successfully.");
        } else {
            RCLCPP_ERROR(node->get_logger(), "Execution failed.");
        }
    } else {
        RCLCPP_ERROR(node->get_logger(), "Planning failed.");
    }
}

int main(int argc, char** argv) {
    // Initialize ROS 2 node
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("moveit_pose_interface");

    // Example target pose (modify these values as needed)
    geometry_msgs::msg::Pose target_pose;
    target_pose.position.x = 0.4;  // Replace with desired x-coordinate
    target_pose.position.y = 0.2;  // Replace with desired y-coordinate
    target_pose.position.z = 0.3;  // Replace with desired z-coordinate

    // Orientation in quaternion format
    target_pose.orientation.x = 1.0;  // Replace with desired orientation
    target_pose.orientation.y = 0.0;
    target_pose.orientation.z = 0.0;
    target_pose.orientation.w = 1.0;

    // Move robot to the target pose
    move_robot_to_pose(node, target_pose);

    // Spin node to process callbacks
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
