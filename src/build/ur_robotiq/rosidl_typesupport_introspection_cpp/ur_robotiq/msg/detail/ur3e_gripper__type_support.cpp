// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ur_robotiq:msg/UR3eGripper.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ur_robotiq/msg/detail/ur3e_gripper__struct.hpp"
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

void UR3eGripper_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ur_robotiq::msg::UR3eGripper(_init);
}

void UR3eGripper_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ur_robotiq::msg::UR3eGripper *>(message_memory);
  typed_message->~UR3eGripper();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UR3eGripper_message_member_array[1] = {
  {
    "gripper",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ur_robotiq::msg::UR3eGripper, gripper),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UR3eGripper_message_members = {
  "ur_robotiq::msg",  // message namespace
  "UR3eGripper",  // message name
  1,  // number of fields
  sizeof(ur_robotiq::msg::UR3eGripper),
  UR3eGripper_message_member_array,  // message members
  UR3eGripper_init_function,  // function to initialize message memory (memory has to be allocated)
  UR3eGripper_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UR3eGripper_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UR3eGripper_message_members,
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
get_message_type_support_handle<ur_robotiq::msg::UR3eGripper>()
{
  return &::ur_robotiq::msg::rosidl_typesupport_introspection_cpp::UR3eGripper_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ur_robotiq, msg, UR3eGripper)() {
  return &::ur_robotiq::msg::rosidl_typesupport_introspection_cpp::UR3eGripper_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
