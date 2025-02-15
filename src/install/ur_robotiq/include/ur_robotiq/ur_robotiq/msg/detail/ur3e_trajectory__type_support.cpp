// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ur_robotiq:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_robotiq/msg/detail/ur3e_trajectory__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ur_robotiq
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void UR3eTrajectory_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_robotiq::msg::UR3eTrajectory(_init);
}

void UR3eTrajectory_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_robotiq::msg::UR3eTrajectory *>(message_memory);
  typed_message->~UR3eTrajectory();
}

size_t size_function__UR3eTrajectory__trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return member->size();
}

const void * get_const_function__UR3eTrajectory__trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return &member[index];
}

void * get_function__UR3eTrajectory__trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  return &member[index];
}

void fetch_function__UR3eTrajectory__trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const moveit_msgs::msg::RobotTrajectory *>(
    get_const_function__UR3eTrajectory__trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<moveit_msgs::msg::RobotTrajectory *>(untyped_value);
  value = item;
}

void assign_function__UR3eTrajectory__trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<moveit_msgs::msg::RobotTrajectory *>(
    get_function__UR3eTrajectory__trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const moveit_msgs::msg::RobotTrajectory *>(untyped_value);
  item = value;
}

void resize_function__UR3eTrajectory__trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<moveit_msgs::msg::RobotTrajectory> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UR3eTrajectory_message_member_array[1] = {
  {
    "trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<moveit_msgs::msg::RobotTrajectory>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_robotiq::msg::UR3eTrajectory, trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__UR3eTrajectory__trajectory,  // size() function pointer
    get_const_function__UR3eTrajectory__trajectory,  // get_const(index) function pointer
    get_function__UR3eTrajectory__trajectory,  // get(index) function pointer
    fetch_function__UR3eTrajectory__trajectory,  // fetch(index, &value) function pointer
    assign_function__UR3eTrajectory__trajectory,  // assign(index, value) function pointer
    resize_function__UR3eTrajectory__trajectory  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UR3eTrajectory_message_members = {
  "ur_robotiq::msg",  // message namespace
  "UR3eTrajectory",  // message name
  1,  // number of fields
  sizeof(ur_robotiq::msg::UR3eTrajectory),
  UR3eTrajectory_message_member_array,  // message members
  UR3eTrajectory_init_function,  // function to initialize message memory (memory has to be allocated)
  UR3eTrajectory_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UR3eTrajectory_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UR3eTrajectory_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ur_robotiq


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ur_robotiq::msg::UR3eTrajectory>()
{
  return &::ur_robotiq::msg::rosidl_typesupport_introspection_cpp::UR3eTrajectory_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_robotiq, msg, UR3eTrajectory)() {
  return &::ur_robotiq::msg::rosidl_typesupport_introspection_cpp::UR3eTrajectory_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
