// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vectornav_msgs:msg/InsGroup.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__INS_GROUP__TRAITS_HPP_
#define VECTORNAV_MSGS__MSG__DETAIL__INS_GROUP__TRAITS_HPP_

#include "vectornav_msgs/msg/detail/ins_group__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'insstatus'
#include "vectornav_msgs/msg/detail/ins_status__traits.hpp"
// Member 'poslla'
// Member 'posecef'
#include "geometry_msgs/msg/detail/point__traits.hpp"
// Member 'velbody'
// Member 'velned'
// Member 'velecef'
// Member 'magecef'
// Member 'accelecef'
// Member 'linearaccelecef'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vectornav_msgs::msg::InsGroup & msg,
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

  // member: insstatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "insstatus:\n";
    to_yaml(msg.insstatus, out, indentation + 2);
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

  // member: velbody
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velbody:\n";
    to_yaml(msg.velbody, out, indentation + 2);
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

  // member: magecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "magecef:\n";
    to_yaml(msg.magecef, out, indentation + 2);
  }

  // member: accelecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accelecef:\n";
    to_yaml(msg.accelecef, out, indentation + 2);
  }

  // member: linearaccelecef
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linearaccelecef:\n";
    to_yaml(msg.linearaccelecef, out, indentation + 2);
  }

  // member: posu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "posu: ";
    value_to_yaml(msg.posu, out);
    out << "\n";
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vectornav_msgs::msg::InsGroup & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vectornav_msgs::msg::InsGroup>()
{
  return "vectornav_msgs::msg::InsGroup";
}

template<>
inline const char * name<vectornav_msgs::msg::InsGroup>()
{
  return "vectornav_msgs/msg/InsGroup";
}

template<>
struct has_fixed_size<vectornav_msgs::msg::InsGroup>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value && has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value && has_fixed_size<vectornav_msgs::msg::InsStatus>::value> {};

template<>
struct has_bounded_size<vectornav_msgs::msg::InsGroup>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value && has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value && has_bounded_size<vectornav_msgs::msg::InsStatus>::value> {};

template<>
struct is_message<vectornav_msgs::msg::InsGroup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VECTORNAV_MSGS__MSG__DETAIL__INS_GROUP__TRAITS_HPP_
