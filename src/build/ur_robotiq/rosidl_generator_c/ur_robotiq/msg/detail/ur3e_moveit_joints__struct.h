// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_robotiq:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_H_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pick_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

/// Struct defined in msg/UR3eMoveitJoints in the package ur_robotiq.
typedef struct ur_robotiq__msg__UR3eMoveitJoints
{
  double joints[6];
  geometry_msgs__msg__Pose pick_pose;
} ur_robotiq__msg__UR3eMoveitJoints;

// Struct for a sequence of ur_robotiq__msg__UR3eMoveitJoints.
typedef struct ur_robotiq__msg__UR3eMoveitJoints__Sequence
{
  ur_robotiq__msg__UR3eMoveitJoints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_robotiq__msg__UR3eMoveitJoints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__STRUCT_H_
