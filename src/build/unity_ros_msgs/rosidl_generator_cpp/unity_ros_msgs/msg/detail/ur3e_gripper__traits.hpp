// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_ros_msgs:msg/UR3eGripper.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__TRAITS_HPP_
#define UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unity_ros_msgs/msg/detail/ur3e_gripper__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unity_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UR3eGripper & msg,
  std::ostream & out)
{
  out << "{";
  // member: gripper
  {
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UR3eGripper & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: gripper
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gripper: ";
    rosidl_generator_traits::value_to_yaml(msg.gripper, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UR3eGripper & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace unity_ros_msgs

namespace rosidl_generator_traits
{

[[deprecated("use unity_ros_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unity_ros_msgs::msg::UR3eGripper & msg,
  std::ostream & out, size_t indentation = 0)
{
  unity_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unity_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const unity_ros_msgs::msg::UR3eGripper & msg)
{
  return unity_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unity_ros_msgs::msg::UR3eGripper>()
{
  return "unity_ros_msgs::msg::UR3eGripper";
}

template<>
inline const char * name<unity_ros_msgs::msg::UR3eGripper>()
{
  return "unity_ros_msgs/msg/UR3eGripper";
}

template<>
struct has_fixed_size<unity_ros_msgs::msg::UR3eGripper>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unity_ros_msgs::msg::UR3eGripper>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unity_ros_msgs::msg::UR3eGripper>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROS_MSGS__MSG__DETAIL__UR3E_GRIPPER__TRAITS_HPP_
