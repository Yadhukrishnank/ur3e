#include <memory>
#include <rclcpp/rclcpp.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include "unity_ros_msgs/msg/ur3e_moveit_joints.hpp" 

class UR3eMotionController : public rclcpp::Node {
public:
    UR3eMotionController() : Node("ur3e_motion_controller") {
        // Subscriber to listen for joint angle updates
        subscription_ = this->create_subscription<unity_ros_msgs::msg::UR3eMoveitJoints>(
            "ur3e_moveit_joints", 10, 
            std::bind(&UR3eMotionController::jointCallback, this, std::placeholders::_1));

        // Defer MoveGroupInterface initialization
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(100), // Wait 100ms to ensure shared_from_this() is valid
            [this]() { this->initializeMoveGroup(); });
    }

private:
    void initializeMoveGroup() {
        // Initialize MoveGroupInterface after the object is fully constructed
        arm_move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(
            shared_from_this(), "ur_manipulator");

        // Configure MoveGroup
        arm_move_group_->setPlanningTime(10.0); // Increase planning time
        arm_move_group_->setMaxVelocityScalingFactor(0.5); // Reduce speed for safety

        // Stop the timer after initialization
        timer_->cancel();
    }

    void jointCallback(const unity_ros_msgs::msg::UR3eMoveitJoints::SharedPtr msg) {
        // Extract joint angles from the message
        std::vector<double> target_joints(msg->joints.begin(), msg->joints.end());

        // Log received joint angles
        RCLCPP_INFO(this->get_logger(), "Received joint angles: [%f, %f, %f, %f, %f, %f]",
                   target_joints[0], target_joints[1], target_joints[2],
                   target_joints[3], target_joints[4], target_joints[5]);

        // Move the robot to the target joint angles
        moveRobotToJoints(target_joints);
    }

    void moveRobotToJoints(const std::vector<double>& target_joints) {
        if (!arm_move_group_) {
            RCLCPP_ERROR(this->get_logger(), "MoveGroupInterface not initialized!");
            return;
        }

        // Set the target joint angles
        arm_move_group_->setJointValueTarget(target_joints);

        // Plan motion
        moveit::planning_interface::MoveGroupInterface::Plan arm_plan;
        auto plan_result = arm_move_group_->plan(arm_plan);

        if (plan_result == moveit::core::MoveItErrorCode::SUCCESS) {
            RCLCPP_INFO(this->get_logger(), "Planning successful. Executing...");
            auto exec_result = arm_move_group_->execute(arm_plan);
            if (exec_result != moveit::core::MoveItErrorCode::SUCCESS) {
                RCLCPP_ERROR(this->get_logger(), "Execution failed with error: %d", exec_result.val);
            }
        } else {
            RCLCPP_ERROR(this->get_logger(), "Planning failed with error: %d", plan_result.val);
        }
    }

    rclcpp::Subscription<unity_ros_msgs::msg::UR3eMoveitJoints>::SharedPtr subscription_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> arm_move_group_;
};

int main(int argc, char** argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<UR3eMotionController>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}