import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node
from control_msgs.action import FollowJointTrajectory
from trajectory_msgs.msg import JointTrajectoryPoint


class FollowJointTrajectoryClient(Node):
    def __init__(self):
        super().__init__('follow_joint_trajectory_client')
        self._action_client = ActionClient(
            self, FollowJointTrajectory, '/joint_trajectory_controller/follow_joint_trajectory'
        )

    def send_goal(self):
        goal_msg = FollowJointTrajectory.Goal()
        
        # Define joint names
        goal_msg.trajectory.joint_names = [
            'shoulder_pan_joint', 
            'shoulder_lift_joint', 
            'elbow_joint', 
            'wrist_1_joint', 
            'wrist_2_joint', 
            'wrist_3_joint'
        ]
        
        # Define trajectory point
        point = JointTrajectoryPoint()
        point.positions = [1.0, 1.0, 1.0, 1.0, 8.0, 1.0]  # Replace with valid positions for your robot
        point.time_from_start.sec = 6
        point.time_from_start.nanosec = 0
        
        # Add the trajectory point to the trajectory
        goal_msg.trajectory.points.append(point)
        
        self._action_client.wait_for_server()
        self.get_logger().info('Sending goal...')
        self._action_client.send_goal_async(goal_msg).add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return

        self.get_logger().info('Goal accepted :)')
        goal_handle.get_result_async().add_done_callback(self.get_result_callback)

    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info(f'Result received: {result.error_code}')
        rclpy.shutdown()


def main(args=None):
    rclpy.init(args=args)
    action_client = FollowJointTrajectoryClient()
    action_client.send_goal()
    rclpy.spin(action_client)


if __name__ == '__main__':
    main()
