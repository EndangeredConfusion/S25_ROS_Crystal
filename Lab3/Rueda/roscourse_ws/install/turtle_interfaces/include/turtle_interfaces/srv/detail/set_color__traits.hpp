// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__TRAITS_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__TRAITS_HPP_

#include "turtle_interfaces/srv/detail/set_color__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::SetColor_Request>()
{
  return "turtle_interfaces::srv::SetColor_Request";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColor_Request>()
{
  return "turtle_interfaces/srv/SetColor_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColor_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::srv::SetColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::SetColor_Response>()
{
  return "turtle_interfaces::srv::SetColor_Response";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColor_Response>()
{
  return "turtle_interfaces/srv/SetColor_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::srv::SetColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::srv::SetColor>()
{
  return "turtle_interfaces::srv::SetColor";
}

template<>
inline const char * name<turtle_interfaces::srv::SetColor>()
{
  return "turtle_interfaces/srv/SetColor";
}

template<>
struct has_fixed_size<turtle_interfaces::srv::SetColor>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::srv::SetColor_Request>::value &&
    has_fixed_size<turtle_interfaces::srv::SetColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::srv::SetColor>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::srv::SetColor_Request>::value &&
    has_bounded_size<turtle_interfaces::srv::SetColor_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::srv::SetColor>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::srv::SetColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::srv::SetColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__TRAITS_HPP_
