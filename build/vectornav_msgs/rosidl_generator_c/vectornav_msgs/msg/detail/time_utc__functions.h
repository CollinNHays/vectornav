// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vectornav_msgs:msg/TimeUTC.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__TIME_UTC__FUNCTIONS_H_
#define VECTORNAV_MSGS__MSG__DETAIL__TIME_UTC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vectornav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vectornav_msgs/msg/detail/time_utc__struct.h"

/// Initialize msg/TimeUTC message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vectornav_msgs__msg__TimeUTC
 * )) before or use
 * vectornav_msgs__msg__TimeUTC__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__TimeUTC__init(vectornav_msgs__msg__TimeUTC * msg);

/// Finalize msg/TimeUTC message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__TimeUTC__fini(vectornav_msgs__msg__TimeUTC * msg);

/// Create msg/TimeUTC message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vectornav_msgs__msg__TimeUTC__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
vectornav_msgs__msg__TimeUTC *
vectornav_msgs__msg__TimeUTC__create();

/// Destroy msg/TimeUTC message.
/**
 * It calls
 * vectornav_msgs__msg__TimeUTC__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__TimeUTC__destroy(vectornav_msgs__msg__TimeUTC * msg);


/// Initialize array of msg/TimeUTC messages.
/**
 * It allocates the memory for the number of elements and calls
 * vectornav_msgs__msg__TimeUTC__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__TimeUTC__Sequence__init(vectornav_msgs__msg__TimeUTC__Sequence * array, size_t size);

/// Finalize array of msg/TimeUTC messages.
/**
 * It calls
 * vectornav_msgs__msg__TimeUTC__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__TimeUTC__Sequence__fini(vectornav_msgs__msg__TimeUTC__Sequence * array);

/// Create array of msg/TimeUTC messages.
/**
 * It allocates the memory for the array and calls
 * vectornav_msgs__msg__TimeUTC__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
vectornav_msgs__msg__TimeUTC__Sequence *
vectornav_msgs__msg__TimeUTC__Sequence__create(size_t size);

/// Destroy array of msg/TimeUTC messages.
/**
 * It calls
 * vectornav_msgs__msg__TimeUTC__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__TimeUTC__Sequence__destroy(vectornav_msgs__msg__TimeUTC__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // VECTORNAV_MSGS__MSG__DETAIL__TIME_UTC__FUNCTIONS_H_
