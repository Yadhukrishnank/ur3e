// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_robotiq:srv/UrMoverService.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_H_
#define UR_ROBOTIQ__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_H_

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
#include "ur_robotiq/msg/detail/ur3e_moveit_joints__struct.h"
// Member 'pick_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in srv/UrMoverService in the package ur_robotiq.
typedef struct ur_robotiq__srv__UrMoverService_Request
{
  ur_robotiq__msg__UR3eMoveitJoints joints_input;
  geometry_msgs__msg__Pose pick_pose;
} ur_robotiq__srv__UrMoverService_Request;

// Struct for a sequence of ur_robotiq__srv__UrMoverService_Request.
typedef struct ur_robotiq__srv__UrMoverService_Request__Sequence
{
  ur_robotiq__srv__UrMoverService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_robotiq__srv__UrMoverService_Request__Sequence;


// Constants defined in the message

// Include directives for member types
// Member 'trajectories'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

/// Struct defined in srv/UrMoverService in the package ur_robotiq.
typedef struct ur_robotiq__srv__UrMoverService_Response
{
  moveit_msgs__msg__RobotTrajectory__Sequence trajectories;
} ur_robotiq__srv__UrMoverService_Response;

// Struct for a sequence of ur_robotiq__srv__UrMoverService_Response.
typedef struct ur_robotiq__srv__UrMoverService_Response__Sequence
{
  ur_robotiq__srv__UrMoverService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_robotiq__srv__UrMoverService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROBOTIQ__SRV__DETAIL__UR_MOVER_SERVICE__STRUCT_H_
