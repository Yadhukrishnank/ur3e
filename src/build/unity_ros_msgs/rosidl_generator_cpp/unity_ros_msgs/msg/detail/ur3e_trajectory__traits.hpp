// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unity_ros_msgs:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__TRAITS_HPP_
#define UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "unity_ros_msgs/msg/detail/ur3e_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace unity_ros_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const UR3eTrajectory & msg,
  std::ostream & out)
{
  out << "{";
  // member: trajectory
  {
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []";
    } else {
      out << "trajectory: [";
      size_t pending_items = msg.trajectory.size();
      for (auto item : msg.trajectory) {
        to_flow_style_yaml(item, out);
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
  const UR3eTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: trajectory
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.trajectory.size() == 0) {
      out << "trajectory: []\n";
    } else {
      out << "trajectory:\n";
      for (auto item : msg.trajectory) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UR3eTrajectory & msg, bool use_flow_style = false)
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
  const unity_ros_msgs::msg::UR3eTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  unity_ros_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use unity_ros_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const unity_ros_msgs::msg::UR3eTrajectory & msg)
{
  return unity_ros_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<unity_ros_msgs::msg::UR3eTrajectory>()
{
  return "unity_ros_msgs::msg::UR3eTrajectory";
}

template<>
inline const char * name<unity_ros_msgs::msg::UR3eTrajectory>()
{
  return "unity_ros_msgs/msg/UR3eTrajectory";
}

template<>
struct has_fixed_size<unity_ros_msgs::msg::UR3eTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<unity_ros_msgs::msg::UR3eTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<unity_ros_msgs::msg::UR3eTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITY_ROS_MSGS__MSG__DETAIL__UR3E_TRAJECTORY__TRAITS_HPP_
