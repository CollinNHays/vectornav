// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vectornav_msgs:msg/TimeGroup.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__TIME_GROUP__TRAITS_HPP_
#define VECTORNAV_MSGS__MSG__DETAIL__TIME_GROUP__TRAITS_HPP_

#include "vectornav_msgs/msg/detail/time_group__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'timeutc'
#include "vectornav_msgs/msg/detail/time_utc__traits.hpp"
// Member 'timestatus'
#include "vectornav_msgs/msg/detail/time_status__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vectornav_msgs::msg::TimeGroup & msg,
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

  // member: timestartup
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestartup: ";
    value_to_yaml(msg.timestartup, out);
    out << "\n";
  }

  // member: timegps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timegps: ";
    value_to_yaml(msg.timegps, out);
    out << "\n";
  }

  // member: gpstow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpstow: ";
    value_to_yaml(msg.gpstow, out);
    out << "\n";
  }

  // member: gpsweek
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gpsweek: ";
    value_to_yaml(msg.gpsweek, out);
    out << "\n";
  }

  // member: timesyncin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timesyncin: ";
    value_to_yaml(msg.timesyncin, out);
    out << "\n";
  }

  // member: timegpspps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timegpspps: ";
    value_to_yaml(msg.timegpspps, out);
    out << "\n";
  }

  // member: timeutc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timeutc:\n";
    to_yaml(msg.timeutc, out, indentation + 2);
  }

  // member: syncincnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "syncincnt: ";
    value_to_yaml(msg.syncincnt, out);
    out << "\n";
  }

  // member: syncoutcnt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "syncoutcnt: ";
    value_to_yaml(msg.syncoutcnt, out);
    out << "\n";
  }

  // member: timestatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestatus:\n";
    to_yaml(msg.timestatus, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vectornav_msgs::msg::TimeGroup & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vectornav_msgs::msg::TimeGroup>()
{
  return "vectornav_msgs::msg::TimeGroup";
}

template<>
inline const char * name<vectornav_msgs::msg::TimeGroup>()
{
  return "vectornav_msgs/msg/TimeGroup";
}

template<>
struct has_fixed_size<vectornav_msgs::msg::TimeGroup>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<vectornav_msgs::msg::TimeStatus>::value && has_fixed_size<vectornav_msgs::msg::TimeUTC>::value> {};

template<>
struct has_bounded_size<vectornav_msgs::msg::TimeGroup>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<vectornav_msgs::msg::TimeStatus>::value && has_bounded_size<vectornav_msgs::msg::TimeUTC>::value> {};

template<>
struct is_message<vectornav_msgs::msg::TimeGroup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VECTORNAV_MSGS__MSG__DETAIL__TIME_GROUP__TRAITS_HPP_
