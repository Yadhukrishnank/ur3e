// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_robotics_demo_msgs:msg/PosRot.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__TRAITS_HPP_
#define UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unity_robotics_demo_msgs/msg/detail/pos_rot__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace unity_robotics_demo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PosRot & msg,
  std::ostream & out)
{
  out << "{";
  // member: joints
  {
    if (msg.joints.size() == 0) {
      out << "joints: []";
    } else {
      out << "joints: [";
      size_t pending_items = msg.joints.size();
      for (auto item : msg.joints) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PosRot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: joints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.joints.size() == 0) {
      out << "joints: []\n";
    } else {
      out << "joints:\n";
      for (auto item : msg.joints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PosRot & msg, bool use_flow_style = false)
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

}  // namespace unity_robotics_demo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use unity_robotics_demo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const unity_robotics_demo_msgs::msg::PosRot & msg,
  std::ostream & out, size_t indentation = 0)
{
  unity_robotics_demo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unity_robotics_demo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const unity_robotics_demo_msgs::msg::PosRot & msg)
{
  return unity_robotics_demo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unity_robotics_demo_msgs::msg::PosRot>()
{
  return "unity_robotics_demo_msgs::msg::PosRot";
}

template<>
inline const char * name<unity_robotics_demo_msgs::msg::PosRot>()
{
  return "unity_robotics_demo_msgs/msg/PosRot";
}

template<>
struct has_fixed_size<unity_robotics_demo_msgs::msg::PosRot>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<unity_robotics_demo_msgs::msg::PosRot>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<unity_robotics_demo_msgs::msg::PosRot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROBOTICS_DEMO_MSGS__MSG__DETAIL__POS_ROT__TRAITS_HPP_
