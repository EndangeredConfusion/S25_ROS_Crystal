// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/SetColor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__BUILDER_HPP_

#include "turtle_interfaces/srv/detail/set_color__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetColor_Request_color
{
public:
  Init_SetColor_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::SetColor_Request color(::turtle_interfaces::srv::SetColor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetColor_Request>()
{
  return turtle_interfaces::srv::builder::Init_SetColor_Request_color();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_SetColor_Response_ret
{
public:
  Init_SetColor_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::SetColor_Response ret(::turtle_interfaces::srv::SetColor_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::SetColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::SetColor_Response>()
{
  return turtle_interfaces::srv::builder::Init_SetColor_Response_ret();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SET_COLOR__BUILDER_HPP_
