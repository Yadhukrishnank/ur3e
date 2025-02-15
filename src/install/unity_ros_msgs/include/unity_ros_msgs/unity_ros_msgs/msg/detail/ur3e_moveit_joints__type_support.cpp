// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from unity_ros_msgs:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "unity_ros_msgs/msg/detail/ur3e_moveit_joints__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace unity_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void UR3eMoveitJoints_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) unity_ros_msgs::msg::UR3eMoveitJoints(_init);
}

void UR3eMoveitJoints_fini_function(void * message_memory)
{
  auto typed_message = static_cast<unity_ros_msgs::msg::UR3eMoveitJoints *>(message_memory);
  typed_message->~UR3eMoveitJoints();
}

size_t size_function__UR3eMoveitJoints__joints(const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * get_const_function__UR3eMoveitJoints__joints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void * get_function__UR3eMoveitJoints__joints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<double, 6> *>(untyped_member);
  return &member[index];
}

void fetch_function__UR3eMoveitJoints__joints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__UR3eMoveitJoints__joints(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__UR3eMoveitJoints__joints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__UR3eMoveitJoints__joints(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UR3eMoveitJoints_message_member_array[2] = {
  {
    "joints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(unity_ros_msgs::msg::UR3eMoveitJoints, joints),  // bytes offset in struct
    nullptr,  // default value
    size_function__UR3eMoveitJoints__joints,  // size() function pointer
    get_const_function__UR3eMoveitJoints__joints,  // get_const(index) function pointer
    get_function__UR3eMoveitJoints__joints,  // get(index) function pointer
    fetch_function__UR3eMoveitJoints__joints,  // fetch(index, &value) function pointer
    assign_function__UR3eMoveitJoints__joints,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "pick_pose",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Pose>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(unity_ros_msgs::msg::UR3eMoveitJoints, pick_pose),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UR3eMoveitJoints_message_members = {
  "unity_ros_msgs::msg",  // message namespace
  "UR3eMoveitJoints",  // message name
  2,  // number of fields
  sizeof(unity_ros_msgs::msg::UR3eMoveitJoints),
  UR3eMoveitJoints_message_member_array,  // message members
  UR3eMoveitJoints_init_function,  // function to initialize message memory (memory has to be allocated)
  UR3eMoveitJoints_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UR3eMoveitJoints_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UR3eMoveitJoints_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace unity_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<unity_ros_msgs::msg::UR3eMoveitJoints>()
{
  return &::unity_ros_msgs::msg::rosidl_typesupport_introspection_cpp::UR3eMoveitJoints_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, unity_ros_msgs, msg, UR3eMoveitJoints)() {
  return &::unity_ros_msgs::msg::rosidl_typesupport_introspection_cpp::UR3eMoveitJoints_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
