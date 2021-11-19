// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from vectornav_msgs:msg/ImuGroup.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__IMU_GROUP__TRAITS_HPP_
#define VECTORNAV_MSGS__MSG__DETAIL__IMU_GROUP__TRAITS_HPP_

#include "vectornav_msgs/msg/detail/imu_group__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'uncompmag'
// Member 'uncompaccel'
// Member 'uncompgyro'
// Member 'deltatheta_dtheta'
// Member 'deltavel'
// Member 'mag'
// Member 'accel'
// Member 'angularrate'
#include "geometry_msgs/msg/detail/vector3__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const vectornav_msgs::msg::ImuGroup & msg,
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

  // member: imustatus
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "imustatus: ";
    value_to_yaml(msg.imustatus, out);
    out << "\n";
  }

  // member: uncompmag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncompmag:\n";
    to_yaml(msg.uncompmag, out, indentation + 2);
  }

  // member: uncompaccel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncompaccel:\n";
    to_yaml(msg.uncompaccel, out, indentation + 2);
  }

  // member: uncompgyro
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "uncompgyro:\n";
    to_yaml(msg.uncompgyro, out, indentation + 2);
  }

  // member: temp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "temp: ";
    value_to_yaml(msg.temp, out);
    out << "\n";
  }

  // member: pres
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pres: ";
    value_to_yaml(msg.pres, out);
    out << "\n";
  }

  // member: deltatheta_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltatheta_time: ";
    value_to_yaml(msg.deltatheta_time, out);
    out << "\n";
  }

  // member: deltatheta_dtheta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltatheta_dtheta:\n";
    to_yaml(msg.deltatheta_dtheta, out, indentation + 2);
  }

  // member: deltavel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "deltavel:\n";
    to_yaml(msg.deltavel, out, indentation + 2);
  }

  // member: mag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mag:\n";
    to_yaml(msg.mag, out, indentation + 2);
  }

  // member: accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "accel:\n";
    to_yaml(msg.accel, out, indentation + 2);
  }

  // member: angularrate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angularrate:\n";
    to_yaml(msg.angularrate, out, indentation + 2);
  }

  // member: sensat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensat: ";
    value_to_yaml(msg.sensat, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const vectornav_msgs::msg::ImuGroup & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<vectornav_msgs::msg::ImuGroup>()
{
  return "vectornav_msgs::msg::ImuGroup";
}

template<>
inline const char * name<vectornav_msgs::msg::ImuGroup>()
{
  return "vectornav_msgs/msg/ImuGroup";
}

template<>
struct has_fixed_size<vectornav_msgs::msg::ImuGroup>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Vector3>::value && has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<vectornav_msgs::msg::ImuGroup>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Vector3>::value && has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<vectornav_msgs::msg::ImuGroup>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VECTORNAV_MSGS__MSG__DETAIL__IMU_GROUP__TRAITS_HPP_
