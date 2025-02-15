// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from unity_ros_msgs:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "unity_ros_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "unity_ros_msgs/msg/detail/ur3e_trajectory__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace unity_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
cdr_serialize(
  const unity_ros_msgs::msg::UR3eTrajectory & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unity_ros_msgs::msg::UR3eTrajectory & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
get_serialized_size(
  const unity_ros_msgs::msg::UR3eTrajectory & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
max_serialized_size_UR3eTrajectory(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace unity_ros_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unity_ros_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unity_ros_msgs, msg, UR3eTrajectory)();

#ifdef __cplusplus
}
#endif

#endif  // UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
