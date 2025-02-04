// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtle_interfaces:srv/Setcolor.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__SRV__DETAIL__SETCOLOR__BUILDER_HPP_
#define TURTLE_INTERFACES__SRV__DETAIL__SETCOLOR__BUILDER_HPP_

#include "turtle_interfaces/srv/detail/setcolor__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Setcolor_Request_color
{
public:
  Init_Setcolor_Request_color()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::Setcolor_Request color(::turtle_interfaces::srv::Setcolor_Request::_color_type arg)
  {
    msg_.color = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::Setcolor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::Setcolor_Request>()
{
  return turtle_interfaces::srv::builder::Init_Setcolor_Request_color();
}

}  // namespace turtle_interfaces


namespace turtle_interfaces
{

namespace srv
{

namespace builder
{

class Init_Setcolor_Response_ret
{
public:
  Init_Setcolor_Response_ret()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtle_interfaces::srv::Setcolor_Response ret(::turtle_interfaces::srv::Setcolor_Response::_ret_type arg)
  {
    msg_.ret = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtle_interfaces::srv::Setcolor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtle_interfaces::srv::Setcolor_Response>()
{
  return turtle_interfaces::srv::builder::Init_Setcolor_Response_ret();
}

}  // namespace turtle_interfaces

#endif  // TURTLE_INTERFACES__SRV__DETAIL__SETCOLOR__BUILDER_HPP_
