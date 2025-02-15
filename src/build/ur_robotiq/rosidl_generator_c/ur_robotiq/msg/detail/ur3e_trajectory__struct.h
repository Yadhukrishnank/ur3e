// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_robotiq:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__STRUCT_H_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__struct.h"

/// Struct defined in msg/UR3eTrajectory in the package ur_robotiq.
typedef struct ur_robotiq__msg__UR3eTrajectory
{
  moveit_msgs__msg__RobotTrajectory__Sequence trajectory;
} ur_robotiq__msg__UR3eTrajectory;

// Struct for a sequence of ur_robotiq__msg__UR3eTrajectory.
typedef struct ur_robotiq__msg__UR3eTrajectory__Sequence
{
  ur_robotiq__msg__UR3eTrajectory * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_robotiq__msg__UR3eTrajectory__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__STRUCT_H_
