// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unity_ros_msgs:msg/UR3eGripper.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__STRUCT_H_
#define UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UR3eGripper in the package unity_ros_msgs.
typedef struct unity_ros_msgs__msg__UR3eGripper
{
  double gripper;
} unity_ros_msgs__msg__UR3eGripper;

// Struct for a sequence of unity_ros_msgs__msg__UR3eGripper.
typedef struct unity_ros_msgs__msg__UR3eGripper__Sequence
{
  unity_ros_msgs__msg__UR3eGripper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unity_ros_msgs__msg__UR3eGripper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__STRUCT_H_
