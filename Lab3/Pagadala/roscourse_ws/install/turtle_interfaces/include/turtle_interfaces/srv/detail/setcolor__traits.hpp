// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:srv/Setcolor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SETCOLOR__TRAITS_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SETCOLOR__TRAITS_HPP_

#include "turtle_interfaces/srv/detail/setcolor__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::Setcolor_Request>()
{
  return "turtle_interfaces::srv::Setcolor_Request";
}

template<>
inline const char * name<turtle_interfaces::srv::Setcolor_Request>()
{
  return "turtle_interfaces/srv/Setcolor_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::Setcolor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::Setcolor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::srv::Setcolor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::Setcolor_Response>()
{
  return "turtle_interfaces::srv::Setcolor_Response";
}

template<>
inline const char * name<turtle_interfaces::srv::Setcolor_Response>()
{
  return "turtle_interfaces/srv/Setcolor_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::Setcolor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::Setcolor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::Setcolor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::Setcolor>()
{
  return "turtle_interfaces::srv::Setcolor";
}

template<>
inline const char * name<turtle_interfaces::srv::Setcolor>()
{
  return "turtle_interfaces/srv/Setcolor";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::Setcolor>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::srv::Setcolor_Request>::value &&
    has_fixed_size<turtle_interfaces::srv::Setcolor_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::srv::Setcolor>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::srv::Setcolor_Request>::value &&
    has_bounded_size<turtle_interfaces::srv::Setcolor_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::srv::Setcolor>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::srv::Setcolor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::srv::Setcolor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SETCOLOR__TRAITS_HPP_
