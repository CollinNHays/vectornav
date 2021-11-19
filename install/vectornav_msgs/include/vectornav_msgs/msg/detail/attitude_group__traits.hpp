// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vectornav_msgs:msg/AttitudeGroup.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__ATTITUDE_GROUP__TRAITS_HPP_
#define VECTORNAV_MSGS__MSG__DETAIL__ATTITUDE_GROUP__TRAITS_HPP_

#include "vectornav_msgs/msg/detail/attitude_group__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'vpestatus'
#include "vectornav_msgs/msg/detail/vpe_status__traits.hpp"
// Member 'yawpitchroll'
// Member 'magned'
// Member 'accelned'
// Member 'linearaccelbody'
// Member 'linearaccelned'
// Member 'ypru'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'quaternion'
#include "geometry_msgs/msg/detail/quaternion__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vectornav_msgs::msg::AttitudeGroup & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: group_fields
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "group_fields: ";
    value_to_yaml(msg.group_fields, out);
    out << "\n";
  }

  // member: vpestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vpestatus:\n";
    to_yaml(msg.vpestatus, out, indentation + 2);
  }

  // member: yawpitchroll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawpitchroll:\n";
    to_yaml(msg.yawpitchroll, out, indentation + 2);
  }

  // member: quaternion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quaternion:\n";
    to_yaml(msg.quaternion, out, indentation + 2);
  }

  // member: dcm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.dcm.size() == 0) {
      out << "dcm: []\n";
    } else {
      out << "dcm:\n";
      for (auto item : msg.dcm) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: magned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magned:\n";
    to_yaml(msg.magned, out, indentation + 2);
  }

  // member: accelned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelned:\n";
    to_yaml(msg.accelned, out, indentation + 2);
  }

  // member: linearaccelbody
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linearaccelbody:\n";
    to_yaml(msg.linearaccelbody, out, indentation + 2);
  }

  // member: linearaccelned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linearaccelned:\n";
    to_yaml(msg.linearaccelned, out, indentation + 2);
  }

  // member: ypru
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ypru:\n";
    to_yaml(msg.ypru, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vectornav_msgs::msg::AttitudeGroup & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vectornav_msgs::msg::AttitudeGroup>()
{
  return "vectornav_msgs::msg::AttitudeGroup";
}

template<>
inline const char * name<vectornav_msgs::msg::AttitudeGroup>()
{
  return "vectornav_msgs/msg/AttitudeGroup";
}

template<>
struct has_fixed_size<vectornav_msgs::msg::AttitudeGroup>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Quaternion>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<vectornav_msgs::msg::VpeStatus>::value> {};

template<>
struct has_bounded_size<vectornav_msgs::msg::AttitudeGroup>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Quaternion>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<vectornav_msgs::msg::VpeStatus>::value> {};

template<>
struct is_message<vectornav_msgs::msg::AttitudeGroup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VECTORNAV_MSGS__MSG__DETAIL__ATTITUDE_GROUP__TRAITS_HPP_
