from launch import LaunchDescription
from launch_ros.actions import Node

import os
from launch_ros.parameter_descriptions import ParameterValue
from launch.substitutions import Command
from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    # Path to the robot description (URDF/Xacro)
    robot_description = ParameterValue(
        Command(
            ["xacro ", os.path.join(get_package_share_directory("ur_description"), "urdf", "ur.urdf.xacro")]
        ),
        value_type=str
    )

    # Path to the controllers YAML file
    controllers_yaml_path = os.path.join(
        get_package_share_directory("ur_robot_driver"),
        "config",
        "ur_controllers.yaml"
    )

    # Node: Robot State Publisher
    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description}]
    )

    # Node: Controller Manager
    controller_manager = Node(
        package='controller_manager',
        executable='ros2_control_node',
        parameters=[
            {'robot_description': robot_description},
            controllers_yaml_path
        ],
        output='screen'
    )

    # Node: Joint State Broadcaster Spawner
    joint_state_broadcaster_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=[
            "joint_state_broadcaster",
            "--controller-manager",
            "/controller_manager"
        ]
    )
    
    # Node: Controller Spawner
    joint_trajectory_controller_spawner = Node(
        package='controller_manager',
        executable='spawner',
        arguments=[
            "joint_trajectory_controller",
            "--controller-manager",
            "/controller_manager"
        ]
    )

    # Return Launch Description
    return LaunchDescription([
        robot_state_publisher,
        controller_manager,
        joint_state_broadcaster_spawner,
        joint_trajectory_controller_spawner,
    ])
