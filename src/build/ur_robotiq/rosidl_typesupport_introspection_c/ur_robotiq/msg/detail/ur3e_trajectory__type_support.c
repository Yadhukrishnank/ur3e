// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ur_robotiq:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ur_robotiq/msg/detail/ur3e_trajectory__rosidl_typesupport_introspection_c.h"
#include "ur_robotiq/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ur_robotiq/msg/detail/ur3e_trajectory__functions.h"
#include "ur_robotiq/msg/detail/ur3e_trajectory__struct.h"


// Include directives for member types
// Member `trajectory`
#include "moveit_msgs/msg/robot_trajectory.h"
// Member `trajectory`
#include "moveit_msgs/msg/detail/robot_trajectory__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ur_robotiq__msg__UR3eTrajectory__init(message_memory);
}

void ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_fini_function(void * message_memory)
{
  ur_robotiq__msg__UR3eTrajectory__fini(message_memory);
}

size_t ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__size_function__UR3eTrajectory__trajectory(
  const void * untyped_member)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return member->size;
}

const void * ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__get_const_function__UR3eTrajectory__trajectory(
  const void * untyped_member, size_t index)
{
  const moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (const moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__get_function__UR3eTrajectory__trajectory(
  void * untyped_member, size_t index)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  return &member->data[index];
}

void ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__fetch_function__UR3eTrajectory__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const moveit_msgs__msg__RobotTrajectory * item =
    ((const moveit_msgs__msg__RobotTrajectory *)
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__get_const_function__UR3eTrajectory__trajectory(untyped_member, index));
  moveit_msgs__msg__RobotTrajectory * value =
    (moveit_msgs__msg__RobotTrajectory *)(untyped_value);
  *value = *item;
}

void ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__assign_function__UR3eTrajectory__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  moveit_msgs__msg__RobotTrajectory * item =
    ((moveit_msgs__msg__RobotTrajectory *)
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__get_function__UR3eTrajectory__trajectory(untyped_member, index));
  const moveit_msgs__msg__RobotTrajectory * value =
    (const moveit_msgs__msg__RobotTrajectory *)(untyped_value);
  *item = *value;
}

bool ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__resize_function__UR3eTrajectory__trajectory(
  void * untyped_member, size_t size)
{
  moveit_msgs__msg__RobotTrajectory__Sequence * member =
    (moveit_msgs__msg__RobotTrajectory__Sequence *)(untyped_member);
  moveit_msgs__msg__RobotTrajectory__Sequence__fini(member);
  return moveit_msgs__msg__RobotTrajectory__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_member_array[1] = {
  {
    "trajectory",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_robotiq__msg__UR3eTrajectory, trajectory),  // bytes offset in struct
    NULL,  // default value
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__size_function__UR3eTrajectory__trajectory,  // size() function pointer
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__get_const_function__UR3eTrajectory__trajectory,  // get_const(index) function pointer
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__get_function__UR3eTrajectory__trajectory,  // get(index) function pointer
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__fetch_function__UR3eTrajectory__trajectory,  // fetch(index, &value) function pointer
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__assign_function__UR3eTrajectory__trajectory,  // assign(index, value) function pointer
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__resize_function__UR3eTrajectory__trajectory  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_members = {
  "ur_robotiq__msg",  // message namespace
  "UR3eTrajectory",  // message name
  1,  // number of fields
  sizeof(ur_robotiq__msg__UR3eTrajectory),
  ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_member_array,  // message members
  ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_type_support_handle = {
  0,
  &ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ur_robotiq
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ur_robotiq, msg, UR3eTrajectory)() {
  ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, moveit_msgs, msg, RobotTrajectory)();
  if (!ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_type_support_handle.typesupport_identifier) {
    ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ur_robotiq__msg__UR3eTrajectory__rosidl_typesupport_introspection_c__UR3eTrajectory_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
