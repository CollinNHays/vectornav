// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vectornav_msgs:msg/TimeStatus.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__TIME_STATUS__FUNCTIONS_H_
#define VECTORNAV_MSGS__MSG__DETAIL__TIME_STATUS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vectornav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vectornav_msgs/msg/detail/time_status__struct.h"

/// Initialize msg/TimeStatus message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vectornav_msgs__msg__TimeStatus
 * )) before or use
 * vectornav_msgs__msg__TimeStatus__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__TimeStatus__init(vectornav_msgs__msg__TimeStatus * msg);

/// Finalize msg/TimeStatus message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__TimeStatus__fini(vectornav_msgs__msg__TimeStatus * msg);

/// Create msg/TimeStatus message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vectornav_msgs__msg__TimeStatus__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
vectornav_msgs__msg__TimeStatus *
vectornav_msgs__msg__TimeStatus__create();

/// Destroy msg/TimeStatus message.
/**
 * It calls
 * vectornav_msgs__msg__TimeStatus__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__TimeStatus__destroy(vectornav_msgs__msg__TimeStatus * msg);


/// Initialize array of msg/TimeStatus messages.
/**
 * It allocates the memory for the number of elements and calls
 * vectornav_msgs__msg__TimeStatus__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__TimeStatus__Sequence__init(vectornav_msgs__msg__TimeStatus__Sequence * array, size_t size);

/// Finalize array of msg/TimeStatus messages.
/**
 * It calls
 * vectornav_msgs__msg__TimeStatus__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__TimeStatus__Sequence__fini(vectornav_msgs__msg__TimeStatus__Sequence * array);

/// Create array of msg/TimeStatus messages.
/**
 * It allocates the memory for the array and calls
 * vectornav_msgs__msg__TimeStatus__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
vectornav_msgs__msg__TimeStatus__Sequence *
vectornav_msgs__msg__TimeStatus__Sequence__create(size_t size);

/// Destroy array of msg/TimeStatus messages.
/**
 * It calls
 * vectornav_msgs__msg__TimeStatus__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__TimeStatus__Sequence__destroy(vectornav_msgs__msg__TimeStatus__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // VECTORNAV_MSGS__MSG__DETAIL__TIME_STATUS__FUNCTIONS_H_
