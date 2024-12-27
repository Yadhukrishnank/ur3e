#include <rclcpp/rclcpp.hpp>
#include "unity_robotics_demo_msgs/msg/pos_rot.hpp" // Replace with your actual package name

class PositionPublisher : public rclcpp::Node
{
public:
    PositionPublisher() : Node("position_publisher")
    {
        // Create publisher to 'pos_rot' topic with message type PosRot
        publisher_ = this->create_publisher<unity_robotics_demo_msgs::msg::PosRot>("pos_rot", 10);

        // Timer for publishing the position at 0.5 Hz (every 2 seconds)
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(2000), // 2000 ms = 0.5 Hz
            std::bind(&PositionPublisher::publish_position, this));
    }

private:
    void publish_position()
    {
        // Create a PosRot message
        unity_robotics_demo_msgs::msg::PosRot msg;

        // Example position and rotation (replace with real data from an object)
        msg.pos_x = 0.1;  // Example position X
        msg.pos_y = 0.1;  // Example position Y
        msg.pos_z = 0.1;  // Example position Z

        msg.rot_x = 0.1;  // Example rotation X
        msg.rot_y = 0.0;  // Example rotation Y
        msg.rot_z = 0.0;  // Example rotation Z
        msg.rot_w = 1.0;  // Example rotation W (quaternion)

        // Publish the message to the 'pos_rot' topic
        publisher_->publish(msg);

        // Log the published position and rotation
        RCLCPP_INFO(this->get_logger(), "Published position: (%f, %f, %f), Rotation: (%f, %f, %f, %f)",
                    msg.pos_x, msg.pos_y, msg.pos_z,
                    msg.rot_x, msg.rot_y, msg.rot_z, msg.rot_w);
    }

    rclcpp::Publisher<unity_robotics_demo_msgs::msg::PosRot>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
};

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PositionPublisher>());
    rclcpp::shutdown();
    return 0;
}
