// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_robotiq:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_robotiq/msg/detail/ur3e_moveit_joints__rosidl_typesupport_introspection_c.h"
#include "ur_robotiq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_robotiq/msg/detail/ur3e_moveit_joints__functions.h"
#include "ur_robotiq/msg/detail/ur3e_moveit_joints__struct.h"


// Include directives for member types
// Member `pick_pose`
#include "geometry_msgs/msg/pose.h"
// Member `pick_pose`
#include "geometry_msgs/msg/detail/pose__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_robotiq__msg__UR3eMoveitJoints__init(message_memory);
}

void ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_fini_function(void * message_memory)
{
  ur_robotiq__msg__UR3eMoveitJoints__fini(message_memory);
}

size_t ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__size_function__UR3eMoveitJoints__joints(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__get_const_function__UR3eMoveitJoints__joints(
  const void * untyped_member, size_t index)
{
  const double * member =
    (const double *)(untyped_member);
  return &member[index];
}

void * ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__get_function__UR3eMoveitJoints__joints(
  void * untyped_member, size_t index)
{
  double * member =
    (double *)(untyped_member);
  return &member[index];
}

void ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__fetch_function__UR3eMoveitJoints__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__get_const_function__UR3eMoveitJoints__joints(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__assign_function__UR3eMoveitJoints__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__get_function__UR3eMoveitJoints__joints(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_member_array[2] = {
  {
    "joints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(ur_robotiq__msg__UR3eMoveitJoints, joints),  // bytes offset in struct
    NULL,  // default value
    ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__size_function__UR3eMoveitJoints__joints,  // size() function pointer
    ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__get_const_function__UR3eMoveitJoints__joints,  // get_const(index) function pointer
    ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__get_function__UR3eMoveitJoints__joints,  // get(index) function pointer
    ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__fetch_function__UR3eMoveitJoints__joints,  // fetch(index, &value) function pointer
    ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__assign_function__UR3eMoveitJoints__joints,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pick_pose",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_robotiq__msg__UR3eMoveitJoints, pick_pose),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_members = {
  "ur_robotiq__msg",  // message namespace
  "UR3eMoveitJoints",  // message name
  2,  // number of fields
  sizeof(ur_robotiq__msg__UR3eMoveitJoints),
  ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_member_array,  // message members
  ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_type_support_handle = {
  0,
  &ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_robotiq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, msg, UR3eMoveitJoints)() {
  ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Pose)();
  if (!ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_type_support_handle.typesupport_identifier) {
    ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_robotiq__msg__UR3eMoveitJoints__rosidl_typesupport_introspection_c__UR3eMoveitJoints_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
