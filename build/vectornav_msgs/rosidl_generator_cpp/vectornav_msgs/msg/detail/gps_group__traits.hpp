// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vectornav_msgs:msg/GpsGroup.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__GPS_GROUP__TRAITS_HPP_
#define VECTORNAV_MSGS__MSG__DETAIL__GPS_GROUP__TRAITS_HPP_

#include "vectornav_msgs/msg/detail/gps_group__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'utc'
#include "vectornav_msgs/msg/detail/time_utc__traits.hpp"
// Member 'poslla'
// Member 'posecef'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'velned'
// Member 'velecef'
// Member 'posu'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"
// Member 'dop'
#include "vectornav_msgs/msg/detail/dop__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vectornav_msgs::msg::GpsGroup & msg,
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

  // member: utc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utc:\n";
    to_yaml(msg.utc, out, indentation + 2);
  }

  // member: tow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tow: ";
    value_to_yaml(msg.tow, out);
    out << "\n";
  }

  // member: week
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "week: ";
    value_to_yaml(msg.week, out);
    out << "\n";
  }

  // member: numsats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "numsats: ";
    value_to_yaml(msg.numsats, out);
    out << "\n";
  }

  // member: fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix: ";
    value_to_yaml(msg.fix, out);
    out << "\n";
  }

  // member: poslla
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "poslla:\n";
    to_yaml(msg.poslla, out, indentation + 2);
  }

  // member: posecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posecef:\n";
    to_yaml(msg.posecef, out, indentation + 2);
  }

  // member: velned
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velned:\n";
    to_yaml(msg.velned, out, indentation + 2);
  }

  // member: velecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velecef:\n";
    to_yaml(msg.velecef, out, indentation + 2);
  }

  // member: posu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posu:\n";
    to_yaml(msg.posu, out, indentation + 2);
  }

  // member: velu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velu: ";
    value_to_yaml(msg.velu, out);
    out << "\n";
  }

  // member: timeu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeu: ";
    value_to_yaml(msg.timeu, out);
    out << "\n";
  }

  // member: timeinfo_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeinfo_status: ";
    value_to_yaml(msg.timeinfo_status, out);
    out << "\n";
  }

  // member: timeinfo_leapseconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeinfo_leapseconds: ";
    value_to_yaml(msg.timeinfo_leapseconds, out);
    out << "\n";
  }

  // member: dop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dop:\n";
    to_yaml(msg.dop, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vectornav_msgs::msg::GpsGroup & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vectornav_msgs::msg::GpsGroup>()
{
  return "vectornav_msgs::msg::GpsGroup";
}

template<>
inline const char * name<vectornav_msgs::msg::GpsGroup>()
{
  return "vectornav_msgs/msg/GpsGroup";
}

template<>
struct has_fixed_size<vectornav_msgs::msg::GpsGroup>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<vectornav_msgs::msg::DOP>::value && has_fixed_size<vectornav_msgs::msg::TimeUTC>::value> {};

template<>
struct has_bounded_size<vectornav_msgs::msg::GpsGroup>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<vectornav_msgs::msg::DOP>::value && has_bounded_size<vectornav_msgs::msg::TimeUTC>::value> {};

template<>
struct is_message<vectornav_msgs::msg::GpsGroup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VECTORNAV_MSGS__MSG__DETAIL__GPS_GROUP__TRAITS_HPP_
