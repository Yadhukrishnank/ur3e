#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>

void move_robot(const std::shared_ptr<rclcpp::Node> node) {
    // Initialize MoveGroupInterfaces for ur_manipulator and gripper
    auto arm_move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node, "ur_manipulator");
    auto gripper_move_group = std::make_shared<moveit::planning_interface::MoveGroupInterface>(node, "gripper");

    // Define target joint positions for UR arm and gripper
    std::vector<double> arm_joint_goal = {0.0, -1.57, 1.57, -1.57, 1.57}; // Example values for UR arm
    std::map<std::string, double> gripper_joint_goal = {
        {"robotiq_85_left_knuckle_joint", 0.01}
    };

    // Set joint value targets for ur_manipulator
    bool arm_within_bounds = arm_move_group->setJointValueTarget(arm_joint_goal);
    if (!arm_within_bounds) {
        RCLCPP_WARN(node->get_logger(),
                    "UR manipulator joint targets are out of bounds. Planning will clamp to limits.");
    }

    // Set joint value targets for gripper
    gripper_move_group->setJointValueTarget(gripper_joint_goal);

    // Plan motion for ur_manipulator and gripper
    moveit::planning_interface::MoveGroupInterface::Plan arm_plan;
    moveit::planning_interface::MoveGroupInterface::Plan gripper_plan;

    bool arm_plan_success = (arm_move_group->plan(arm_plan) == moveit::core::MoveItErrorCode::SUCCESS);
    bool gripper_plan_success = (gripper_move_group->plan(gripper_plan) == moveit::core::MoveItErrorCode::SUCCESS);

    if (arm_plan_success) {
        RCLCPP_INFO(node->get_logger(), "UR manipulator planning successful. Executing...");
        arm_move_group->execute(arm_plan);
    } else {
        RCLCPP_ERROR(node->get_logger(), "UR manipulator planning failed.");
    }

    if (gripper_plan_success) {
        RCLCPP_INFO(node->get_logger(), "Gripper planning successful. Executing...");
        gripper_move_group->execute(gripper_plan);
    } else {
        RCLCPP_ERROR(node->get_logger(), "Gripper planning failed.");
    }
}

int main(int argc, char** argv) {
    // Initialize ROS 2 node
    rclcpp::init(argc, argv);

    auto node = rclcpp::Node::make_shared("simple_moveit_interface");
    move_robot(node);

    // Spin node to process callbacks
    rclcpp::spin(node);
    rclcpp::shutdown();

    return 0;
}
