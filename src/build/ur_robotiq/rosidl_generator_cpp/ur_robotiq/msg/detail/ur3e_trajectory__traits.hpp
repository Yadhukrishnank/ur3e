// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_robotiq:msg/UR3eTrajectory.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__TRAITS_HPP_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_robotiq/msg/detail/ur3e_trajectory__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'trajectory'
#include "moveit_msgs/msg/detail/robot_trajectory__traits.hpp"

namespace ur_robotiq
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

}  // namespace ur_robotiq

namespace rosidl_generator_traits
{

[[deprecated("use ur_robotiq::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const ur_robotiq::msg::UR3eTrajectory & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_robotiq::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_robotiq::msg::to_yaml() instead")]]
inline std::string to_yaml(const ur_robotiq::msg::UR3eTrajectory & msg)
{
  return ur_robotiq::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ur_robotiq::msg::UR3eTrajectory>()
{
  return "ur_robotiq::msg::UR3eTrajectory";
}

template<>
inline const char * name<ur_robotiq::msg::UR3eTrajectory>()
{
  return "ur_robotiq/msg/UR3eTrajectory";
}

template<>
struct has_fixed_size<ur_robotiq::msg::UR3eTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ur_robotiq::msg::UR3eTrajectory>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ur_robotiq::msg::UR3eTrajectory>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_TRAJECTORY__TRAITS_HPP_
