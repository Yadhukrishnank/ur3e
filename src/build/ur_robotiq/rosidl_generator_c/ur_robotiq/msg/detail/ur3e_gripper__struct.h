// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ur_robotiq:msg/UR3eGripper.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__STRUCT_H_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UR3eGripper in the package ur_robotiq.
typedef struct ur_robotiq__msg__UR3eGripper
{
  double gripper;
} ur_robotiq__msg__UR3eGripper;

// Struct for a sequence of ur_robotiq__msg__UR3eGripper.
typedef struct ur_robotiq__msg__UR3eGripper__Sequence
{
  ur_robotiq__msg__UR3eGripper * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ur_robotiq__msg__UR3eGripper__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_GRIPPER__STRUCT_H_
