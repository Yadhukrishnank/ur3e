// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unity_ros_msgs:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice
#include "unity_ros_msgs/msg/detail/ur3e_moveit_joints__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unity_ros_msgs/msg/detail/ur3e_moveit_joints__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace unity_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
cdr_serialize(
  const unity_ros_msgs::msg::UR3eMoveitJoints & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joints
  {
    cdr << ros_message.joints;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unity_ros_msgs::msg::UR3eMoveitJoints & ros_message)
{
  // Member: joints
  {
    cdr >> ros_message.joints;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
get_serialized_size(
  const unity_ros_msgs::msg::UR3eMoveitJoints & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joints
  {
    size_t array_size = 6;
    size_t item_size = sizeof(ros_message.joints[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
max_serialized_size_UR3eMoveitJoints(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joints
  {
    size_t array_size = 6;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = unity_ros_msgs::msg::UR3eMoveitJoints;
    is_plain =
      (
      offsetof(DataType, joints) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _UR3eMoveitJoints__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unity_ros_msgs::msg::UR3eMoveitJoints *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _UR3eMoveitJoints__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unity_ros_msgs::msg::UR3eMoveitJoints *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _UR3eMoveitJoints__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unity_ros_msgs::msg::UR3eMoveitJoints *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _UR3eMoveitJoints__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_UR3eMoveitJoints(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _UR3eMoveitJoints__callbacks = {
  "unity_ros_msgs::msg",
  "UR3eMoveitJoints",
  _UR3eMoveitJoints__cdr_serialize,
  _UR3eMoveitJoints__cdr_deserialize,
  _UR3eMoveitJoints__get_serialized_size,
  _UR3eMoveitJoints__max_serialized_size
};

static rosidl_message_type_support_t _UR3eMoveitJoints__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_UR3eMoveitJoints__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace unity_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_unity_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<unity_ros_msgs::msg::UR3eMoveitJoints>()
{
  return &unity_ros_msgs::msg::typesupport_fastrtps_cpp::_UR3eMoveitJoints__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unity_ros_msgs, msg, UR3eMoveitJoints)() {
  return &unity_ros_msgs::msg::typesupport_fastrtps_cpp::_UR3eMoveitJoints__handle;
}

#ifdef __cplusplus
}
#endif
