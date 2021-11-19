// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vectornav_msgs:msg/TimeStatus.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__TIME_STATUS__TRAITS_HPP_
#define VECTORNAV_MSGS__MSG__DETAIL__TIME_STATUS__TRAITS_HPP_

#include "vectornav_msgs/msg/detail/time_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vectornav_msgs::msg::TimeStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_ok: ";
    value_to_yaml(msg.time_ok, out);
    out << "\n";
  }

  // member: date_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "date_ok: ";
    value_to_yaml(msg.date_ok, out);
    out << "\n";
  }

  // member: utctime_ok
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "utctime_ok: ";
    value_to_yaml(msg.utctime_ok, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vectornav_msgs::msg::TimeStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vectornav_msgs::msg::TimeStatus>()
{
  return "vectornav_msgs::msg::TimeStatus";
}

template<>
inline const char * name<vectornav_msgs::msg::TimeStatus>()
{
  return "vectornav_msgs/msg/TimeStatus";
}

template<>
struct has_fixed_size<vectornav_msgs::msg::TimeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vectornav_msgs::msg::TimeStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vectornav_msgs::msg::TimeStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VECTORNAV_MSGS__MSG__DETAIL__TIME_STATUS__TRAITS_HPP_
