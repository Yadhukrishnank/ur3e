#include <rclcpp/rclcpp.hpp>
#include "unity_ros_msgs/msg/ur3e_moveit_joints.hpp" 

class JointPositionPublisher : public rclcpp::Node
{
public:
    JointPositionPublisher() : Node("joint_position_publisher")
    {
        // Create publisher to 'ur3e_moveit_joints' topic with message type UR3eMoveitJoints
        publisher_ = this->create_publisher<unity_ros_msgs::msg::UR3eMoveitJoints>("ur3e_moveit_joints", 10);

        // Timer for publishing the joint positions at 0.5 Hz (every 2 seconds)
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(2000), // 2000 ms = 0.5 Hz
            std::bind(&JointPositionPublisher::publish_joints, this));
    }

private:
    void publish_joints()
    {
        // Create a UR3eMoveitJoints message
        unity_ros_msgs::msg::UR3eMoveitJoints msg;

        // Example joint positions in radians for UR3e (6 joints)
        msg.joints = {
            1.0,  // shoulder_pan_joint
            -1.57, // shoulder_lift_joint (approx -90 degrees)
            1.57,  // elbow_joint (approx 90 degrees)
            0.0,  // wrist_1_joint
            0.0,  // wrist_2_joint
            0.0   // wrist_3_joint
        };

        // Publish the message to the 'ur3e_moveit_joints' topic
        publisher_->publish(msg);

        // Log the published joint positions
        RCLCPP_INFO(this->get_logger(), "Published joint positions: [%.2f, %.2f, %.2f, %.2f, %.2f, %.2f]",
                    msg.joints[0], msg.joints[1], msg.joints[2],
                    msg.joints[3], msg.joints[4], msg.joints[5]);
    }

    rclcpp::Publisher<unity_ros_msgs::msg::UR3eMoveitJoints>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JointPositionPublisher>());
    rclcpp::shutdown();
    return 0;
}