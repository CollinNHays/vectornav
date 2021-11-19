// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vectornav_msgs:msg/InsStatus.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__INS_STATUS__TRAITS_HPP_
#define VECTORNAV_MSGS__MSG__DETAIL__INS_STATUS__TRAITS_HPP_

#include "vectornav_msgs/msg/detail/ins_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vectornav_msgs::msg::InsStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    value_to_yaml(msg.mode, out);
    out << "\n";
  }

  // member: gps_fix
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_fix: ";
    value_to_yaml(msg.gps_fix, out);
    out << "\n";
  }

  // member: time_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_error: ";
    value_to_yaml(msg.time_error, out);
    out << "\n";
  }

  // member: imu_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imu_error: ";
    value_to_yaml(msg.imu_error, out);
    out << "\n";
  }

  // member: mag_pres_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag_pres_error: ";
    value_to_yaml(msg.mag_pres_error, out);
    out << "\n";
  }

  // member: gps_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_error: ";
    value_to_yaml(msg.gps_error, out);
    out << "\n";
  }

  // member: gps_heading_ins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_heading_ins: ";
    value_to_yaml(msg.gps_heading_ins, out);
    out << "\n";
  }

  // member: gps_compass
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_compass: ";
    value_to_yaml(msg.gps_compass, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vectornav_msgs::msg::InsStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vectornav_msgs::msg::InsStatus>()
{
  return "vectornav_msgs::msg::InsStatus";
}

template<>
inline const char * name<vectornav_msgs::msg::InsStatus>()
{
  return "vectornav_msgs/msg/InsStatus";
}

template<>
struct has_fixed_size<vectornav_msgs::msg::InsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vectornav_msgs::msg::InsStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vectornav_msgs::msg::InsStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VECTORNAV_MSGS__MSG__DETAIL__INS_STATUS__TRAITS_HPP_
