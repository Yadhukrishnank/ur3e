#include <memory>
#include <vector>
#include <rclcpp/rclcpp.hpp>
#include <geometry_msgs/msg/pose.hpp>
#include <moveit/move_group_interface/move_group_interface.h>
#include "<your_package_name>/srv/pose_command.hpp" // Replace with the actual service header

class MoveItServiceNode : public rclcpp::Node {
public:
    MoveItServiceNode() : Node("simple_moveit_interface") {
        // Initialize MoveGroupInterface for the UR manipulator (arm)
        move_group_ = std::make_shared<moveit::planning_interface::MoveGroupInterface>(this, "ur_manipulator");

        // Create a service to handle pose commands
        service_ = this->create_service<your_package_name::srv::PoseCommand>(
            "move_end_effector",
            std::bind(&MoveItServiceNode::handle_request, this, std::placeholders::_1, std::placeholders::_2)
        );

        RCLCPP_INFO(this->get_logger(), "Service 'move_end_effector' is ready.");
    }

private:
    void handle_request(
        const std::shared_ptr<your_package_name::srv::PoseCommand::Request> request,
        std::shared_ptr<your_package_name::srv::PoseCommand::Response> response) {
        // Log received pose
        RCLCPP_INFO(this->get_logger(), "Received pose command: "
                                          "Position [x: %f, y: %f, z: %f], "
                                          "Orientation [x: %f, y: %f, z: %f, w: %f]",
                    request->pos_x, request->pos_y, request->pos_z,
                    request->rot_x, request->rot_y, request->rot_z, request->rot_w);

        // Define the target pose
        geometry_msgs::msg::Pose target_pose;
        target_pose.position.x = request->pos_x;
        target_pose.position.y = request->pos_y;
        target_pose.position.z = request->pos_z;
        target_pose.orientation.x = request->rot_x;
        target_pose.orientation.y = request->rot_y;
        target_pose.orientation.z = request->rot_z;
        target_pose.orientation.w = request->rot_w;

        // Set the target pose for the move group
        move_group_->setPoseTarget(target_pose);

        // Plan motion
        moveit::planning_interface::MoveGroupInterface::Plan plan;
        bool plan_success = (move_group_->plan(plan) == moveit::core::MoveItErrorCode::SUCCESS);

        if (plan_success) {
            RCLCPP_INFO(this->get_logger(), "Planning successful. Executing motion...");
            move_group_->execute(plan);
            response->success = true;
        } else {
            RCLCPP_ERROR(this->get_logger(), "Planning failed.");
            response->success = false;
        }
    }

    std::shared_ptr<moveit::planning_interface::MoveGroupInterface> move_group_;
    rclcpp::Service<your_package_name::srv::PoseCommand>::SharedPtr service_;
};

int main(int argc, char **argv) {
    // Initialize ROS 2 node
    rclcpp::init(argc, argv);

    // Create and spin the service node
    auto node = std::make_shared<MoveItServiceNode>();
    rclcpp::spin(node);

    // Shutdown ROS 2
    rclcpp::shutdown();
    return 0;
}
