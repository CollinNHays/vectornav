// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from vectornav_msgs:msg/DOP.idl
// generated code does not contain a copyright notice

#ifndef VECTORNAV_MSGS__MSG__DETAIL__DOP__FUNCTIONS_H_
#define VECTORNAV_MSGS__MSG__DETAIL__DOP__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "vectornav_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "vectornav_msgs/msg/detail/dop__struct.h"

/// Initialize msg/DOP message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * vectornav_msgs__msg__DOP
 * )) before or use
 * vectornav_msgs__msg__DOP__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__DOP__init(vectornav_msgs__msg__DOP * msg);

/// Finalize msg/DOP message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__DOP__fini(vectornav_msgs__msg__DOP * msg);

/// Create msg/DOP message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * vectornav_msgs__msg__DOP__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
vectornav_msgs__msg__DOP *
vectornav_msgs__msg__DOP__create();

/// Destroy msg/DOP message.
/**
 * It calls
 * vectornav_msgs__msg__DOP__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__DOP__destroy(vectornav_msgs__msg__DOP * msg);


/// Initialize array of msg/DOP messages.
/**
 * It allocates the memory for the number of elements and calls
 * vectornav_msgs__msg__DOP__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
bool
vectornav_msgs__msg__DOP__Sequence__init(vectornav_msgs__msg__DOP__Sequence * array, size_t size);

/// Finalize array of msg/DOP messages.
/**
 * It calls
 * vectornav_msgs__msg__DOP__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__DOP__Sequence__fini(vectornav_msgs__msg__DOP__Sequence * array);

/// Create array of msg/DOP messages.
/**
 * It allocates the memory for the array and calls
 * vectornav_msgs__msg__DOP__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
vectornav_msgs__msg__DOP__Sequence *
vectornav_msgs__msg__DOP__Sequence__create(size_t size);

/// Destroy array of msg/DOP messages.
/**
 * It calls
 * vectornav_msgs__msg__DOP__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_vectornav_msgs
void
vectornav_msgs__msg__DOP__Sequence__destroy(vectornav_msgs__msg__DOP__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // VECTORNAV_MSGS__MSG__DETAIL__DOP__FUNCTIONS_H_
