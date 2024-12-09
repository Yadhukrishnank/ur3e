import rclpy
from rclpy.node import Node
from trajectory_msgs.msg import JointTrajectory, JointTrajectoryPoint
from std_msgs.msg import Header

class MoveRobotNode(Node):
    def __init__(self):
        super().__init__('move_robot_node')
        
        # Publisher for the joint trajectory command
        self.publisher_ = self.create_publisher(JointTrajectory, '/joint_trajectory_controller/command', 10)
        
        # Create a timer to send a message every 1 second
        self.timer = self.create_timer(1.0, self.timer_callback)

    def timer_callback(self):
        # Create a JointTrajectory message
        msg = JointTrajectory()
        msg.header = Header()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.joint_names = [
            'shoulder_pan_joint',
            'shoulder_lift_joint',
            'elbow_joint',
            'wrist_1_joint',
            'wrist_2_joint',
            'wrist_3_joint'
        ]
        
        # Define the target joint positions (in radians)
        point = JointTrajectoryPoint()
        point.positions = [0.5, -0.2, 0.3, -0.5, 0.2, -0.3]  # Example joint positions
        point.time_from_start.sec = 2  # Move to this position in 2 seconds
        msg.points.append(point)
        
        # Publish the message
        self.publisher_.publish(msg)
        self.get_logger().info('Publishing joint trajectory command')

def main(args=None):
    rclpy.init(args=args)
    move_robot_node = MoveRobotNode()
    rclpy.spin(move_robot_node)
    move_robot_node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
