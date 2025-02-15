// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_ros_msgs:srv/UrMoverService.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_H_
#define UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'joints_input'
#include "unity_ros_msgs/msg/detail/ur3e_moveit_joints__struct.h"
// Member 'pick_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/UrMoverService in the package unity_ros_msgs.
typedef struct unity_ros_msgs__srv__UrMoverService_Request
{
  unity_ros_msgs__msg__UR3eMoveitJoints joints_input;
  geometry_msgs__msg__Pose pick_pose;
} unity_ros_msgs__srv__UrMoverService_Request;

// Struct for a sequence of unity_ros_msgs__srv__UrMoverService_Request.
typedef struct unity_ros_msgs__srv__UrMoverService_Request__Sequence
{
  unity_ros_msgs__srv__UrMoverService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_ros_msgs__srv__UrMoverService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

/// Struct defined in srv/UrMoverService in the package unity_ros_msgs.
typedef struct unity_ros_msgs__srv__UrMoverService_Response
{
  moveit_msgs__msg__RobotTrajectory__Sequence trajectories;
} unity_ros_msgs__srv__UrMoverService_Response;

// Struct for a sequence of unity_ros_msgs__srv__UrMoverService_Response.
typedef struct unity_ros_msgs__srv__UrMoverService_Response__Sequence
{
  unity_ros_msgs__srv__UrMoverService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_ros_msgs__srv__UrMoverService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROS_MSGS__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_H_
