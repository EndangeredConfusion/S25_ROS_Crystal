// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from turtle_interfaces:action/TurtleToGoals.idl
// generated code does not contain a copyright notice

#ifndef TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__TRAITS_HPP_
#define TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__TRAITS_HPP_

#include "turtle_interfaces/action/detail/turtle_to_goals__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_Goal>()
{
  return "turtle_interfaces::action::TurtleToGoals_Goal";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_Goal>()
{
  return "turtle_interfaces/action/TurtleToGoals_Goal";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_Goal>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<turtle_interfaces::action::TurtleToGoals_Goal>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_Result>()
{
  return "turtle_interfaces::action::TurtleToGoals_Result";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_Result>()
{
  return "turtle_interfaces/action/TurtleToGoals_Result";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_Result>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_Result>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<turtle_interfaces::action::TurtleToGoals_Result>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'mid_goal_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_Feedback>()
{
  return "turtle_interfaces::action::TurtleToGoals_Feedback";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_Feedback>()
{
  return "turtle_interfaces/action/TurtleToGoals_Feedback";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_Feedback>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_Feedback>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Pose>::value> {};

template<>
struct is_message<turtle_interfaces::action::TurtleToGoals_Feedback>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'goal'
#include "turtle_interfaces/action/detail/turtle_to_goals__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_SendGoal_Request>()
{
  return "turtle_interfaces::action::TurtleToGoals_SendGoal_Request";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_SendGoal_Request>()
{
  return "turtle_interfaces/action/TurtleToGoals_SendGoal_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_SendGoal_Request>
  : std::integral_constant<bool, has_fixed_size<turtle_interfaces::action::TurtleToGoals_Goal>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_SendGoal_Request>
  : std::integral_constant<bool, has_bounded_size<turtle_interfaces::action::TurtleToGoals_Goal>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_interfaces::action::TurtleToGoals_SendGoal_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_SendGoal_Response>()
{
  return "turtle_interfaces::action::TurtleToGoals_SendGoal_Response";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_SendGoal_Response>()
{
  return "turtle_interfaces/action/TurtleToGoals_SendGoal_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_SendGoal_Response>
  : std::integral_constant<bool, has_fixed_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_SendGoal_Response>
  : std::integral_constant<bool, has_bounded_size<builtin_interfaces::msg::Time>::value> {};

template<>
struct is_message<turtle_interfaces::action::TurtleToGoals_SendGoal_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_SendGoal>()
{
  return "turtle_interfaces::action::TurtleToGoals_SendGoal";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_SendGoal>()
{
  return "turtle_interfaces/action/TurtleToGoals_SendGoal";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_SendGoal>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::action::TurtleToGoals_SendGoal_Request>::value &&
    has_fixed_size<turtle_interfaces::action::TurtleToGoals_SendGoal_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_SendGoal>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::action::TurtleToGoals_SendGoal_Request>::value &&
    has_bounded_size<turtle_interfaces::action::TurtleToGoals_SendGoal_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::action::TurtleToGoals_SendGoal>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::action::TurtleToGoals_SendGoal_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::action::TurtleToGoals_SendGoal_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_GetResult_Request>()
{
  return "turtle_interfaces::action::TurtleToGoals_GetResult_Request";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_GetResult_Request>()
{
  return "turtle_interfaces/action/TurtleToGoals_GetResult_Request";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_GetResult_Request>
  : std::integral_constant<bool, has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_GetResult_Request>
  : std::integral_constant<bool, has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_interfaces::action::TurtleToGoals_GetResult_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'result'
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_GetResult_Response>()
{
  return "turtle_interfaces::action::TurtleToGoals_GetResult_Response";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_GetResult_Response>()
{
  return "turtle_interfaces/action/TurtleToGoals_GetResult_Response";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_GetResult_Response>
  : std::integral_constant<bool, has_fixed_size<turtle_interfaces::action::TurtleToGoals_Result>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_GetResult_Response>
  : std::integral_constant<bool, has_bounded_size<turtle_interfaces::action::TurtleToGoals_Result>::value> {};

template<>
struct is_message<turtle_interfaces::action::TurtleToGoals_GetResult_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_GetResult>()
{
  return "turtle_interfaces::action::TurtleToGoals_GetResult";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_GetResult>()
{
  return "turtle_interfaces/action/TurtleToGoals_GetResult";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_GetResult>
  : std::integral_constant<
    bool,
    has_fixed_size<turtle_interfaces::action::TurtleToGoals_GetResult_Request>::value &&
    has_fixed_size<turtle_interfaces::action::TurtleToGoals_GetResult_Response>::value
  >
{
};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_GetResult>
  : std::integral_constant<
    bool,
    has_bounded_size<turtle_interfaces::action::TurtleToGoals_GetResult_Request>::value &&
    has_bounded_size<turtle_interfaces::action::TurtleToGoals_GetResult_Response>::value
  >
{
};

template<>
struct is_service<turtle_interfaces::action::TurtleToGoals_GetResult>
  : std::true_type
{
};

template<>
struct is_service_request<turtle_interfaces::action::TurtleToGoals_GetResult_Request>
  : std::true_type
{
};

template<>
struct is_service_response<turtle_interfaces::action::TurtleToGoals_GetResult_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__traits.hpp"
// Member 'feedback'
// already included above
// #include "turtle_interfaces/action/detail/turtle_to_goals__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<turtle_interfaces::action::TurtleToGoals_FeedbackMessage>()
{
  return "turtle_interfaces::action::TurtleToGoals_FeedbackMessage";
}

template<>
inline const char * name<turtle_interfaces::action::TurtleToGoals_FeedbackMessage>()
{
  return "turtle_interfaces/action/TurtleToGoals_FeedbackMessage";
}

template<>
struct has_fixed_size<turtle_interfaces::action::TurtleToGoals_FeedbackMessage>
  : std::integral_constant<bool, has_fixed_size<turtle_interfaces::action::TurtleToGoals_Feedback>::value && has_fixed_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct has_bounded_size<turtle_interfaces::action::TurtleToGoals_FeedbackMessage>
  : std::integral_constant<bool, has_bounded_size<turtle_interfaces::action::TurtleToGoals_Feedback>::value && has_bounded_size<unique_identifier_msgs::msg::UUID>::value> {};

template<>
struct is_message<turtle_interfaces::action::TurtleToGoals_FeedbackMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits


namespace rosidl_generator_traits
{

template<>
struct is_action<turtle_interfaces::action::TurtleToGoals>
  : std::true_type
{
};

template<>
struct is_action_goal<turtle_interfaces::action::TurtleToGoals_Goal>
  : std::true_type
{
};

template<>
struct is_action_result<turtle_interfaces::action::TurtleToGoals_Result>
  : std::true_type
{
};

template<>
struct is_action_feedback<turtle_interfaces::action::TurtleToGoals_Feedback>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits


#endif  // TURTLE_INTERFACES__ACTION__DETAIL__TURTLE_TO_GOALS__TRAITS_HPP_
