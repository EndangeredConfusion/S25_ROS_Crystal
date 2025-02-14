// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:msg/TurtleMsg.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__MSG__DETAIL__TURTLE_MSG__TRAITS_HPP_
#define TURTLE_INTERFACES__MSG__DETAIL__TURTLE_MSG__TRAITS_HPP_

#include "turtle_interfaces/msg/detail/turtle_msg__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'turtle_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::msg::TurtleMsg>()
{
  return "turtle_interfaces::msg::TurtleMsg";
}

template<>
inline const char * name<turtle_interfaces::msg::TurtleMsg>()
{
  return "turtle_interfaces/msg/TurtleMsg";
}

template<>
struct has_fixed_size<turtle_interfaces::msg::TurtleMsg>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::msg::TurtleMsg>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::msg::TurtleMsg>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__MSG__DETAIL__TURTLE_MSG__TRAITS_HPP_
