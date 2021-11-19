// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vectornav_msgs:msg/DOP.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__DOP__TRAITS_HPP_
#define VECTORNAV_MSGS__MSG__DETAIL__DOP__TRAITS_HPP_

#include "vectornav_msgs/msg/detail/dop__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vectornav_msgs::msg::DOP & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: p
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p: ";
    value_to_yaml(msg.p, out);
    out << "\n";
  }

  // member: t
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "t: ";
    value_to_yaml(msg.t, out);
    out << "\n";
  }

  // member: v
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "v: ";
    value_to_yaml(msg.v, out);
    out << "\n";
  }

  // member: h
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "h: ";
    value_to_yaml(msg.h, out);
    out << "\n";
  }

  // member: n
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "n: ";
    value_to_yaml(msg.n, out);
    out << "\n";
  }

  // member: e
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "e: ";
    value_to_yaml(msg.e, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vectornav_msgs::msg::DOP & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vectornav_msgs::msg::DOP>()
{
  return "vectornav_msgs::msg::DOP";
}

template<>
inline const char * name<vectornav_msgs::msg::DOP>()
{
  return "vectornav_msgs/msg/DOP";
}

template<>
struct has_fixed_size<vectornav_msgs::msg::DOP>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<vectornav_msgs::msg::DOP>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<vectornav_msgs::msg::DOP>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VECTORNAV_MSGS__MSG__DETAIL__DOP__TRAITS_HPP_
