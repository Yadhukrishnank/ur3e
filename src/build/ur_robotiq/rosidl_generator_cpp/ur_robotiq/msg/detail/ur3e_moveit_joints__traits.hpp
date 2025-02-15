// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ur_robotiq:msg/UR3eMoveitJoints.idl
// generated code does not contain a copyright notice

#ifndef UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__TRAITS_HPP_
#define UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "ur_robotiq/msg/detail/ur3e_moveit_joints__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'pick_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace ur_robotiq
{

namespace msg
{

inline void to_flow_style_yaml(
  const UR3eMoveitJoints & msg,
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
    out << ", ";
  }

  // member: pick_pose
  {
    out << "pick_pose: ";
    to_flow_style_yaml(msg.pick_pose, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const UR3eMoveitJoints & msg,
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

  // member: pick_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pick_pose:\n";
    to_block_style_yaml(msg.pick_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const UR3eMoveitJoints & msg, bool use_flow_style = false)
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
  const ur_robotiq::msg::UR3eMoveitJoints & msg,
  std::ostream & out, size_t indentation = 0)
{
  ur_robotiq::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use ur_robotiq::msg::to_yaml() instead")]]
inline std::string to_yaml(const ur_robotiq::msg::UR3eMoveitJoints & msg)
{
  return ur_robotiq::msg::to_yaml(msg);
}

template<>
inline const char * data_type<ur_robotiq::msg::UR3eMoveitJoints>()
{
  return "ur_robotiq::msg::UR3eMoveitJoints";
}

template<>
inline const char * name<ur_robotiq::msg::UR3eMoveitJoints>()
{
  return "ur_robotiq/msg/UR3eMoveitJoints";
}

template<>
struct has_fixed_size<ur_robotiq::msg::UR3eMoveitJoints>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<ur_robotiq::msg::UR3eMoveitJoints>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<ur_robotiq::msg::UR3eMoveitJoints>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UR_ROBOTIQ__MSG__DETAIL__UR3E_MOVEIT_JOINTS__TRAITS_HPP_
