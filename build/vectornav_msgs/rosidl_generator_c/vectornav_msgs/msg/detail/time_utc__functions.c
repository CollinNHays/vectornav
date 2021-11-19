// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vectornav_msgs:msg/TimeUTC.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/time_utc__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
vectornav_msgs__msg__TimeUTC__init(vectornav_msgs__msg__TimeUTC * msg)
{
  if (!msg) {
    return false;
  }
  // year
  // month
  // day
  // hour
  // min
  // sec
  // ms
  return true;
}

void
vectornav_msgs__msg__TimeUTC__fini(vectornav_msgs__msg__TimeUTC * msg)
{
  if (!msg) {
    return;
  }
  // year
  // month
  // day
  // hour
  // min
  // sec
  // ms
}

vectornav_msgs__msg__TimeUTC *
vectornav_msgs__msg__TimeUTC__create()
{
  vectornav_msgs__msg__TimeUTC * msg = (vectornav_msgs__msg__TimeUTC *)malloc(sizeof(vectornav_msgs__msg__TimeUTC));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vectornav_msgs__msg__TimeUTC));
  bool success = vectornav_msgs__msg__TimeUTC__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vectornav_msgs__msg__TimeUTC__destroy(vectornav_msgs__msg__TimeUTC * msg)
{
  if (msg) {
    vectornav_msgs__msg__TimeUTC__fini(msg);
  }
  free(msg);
}


bool
vectornav_msgs__msg__TimeUTC__Sequence__init(vectornav_msgs__msg__TimeUTC__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vectornav_msgs__msg__TimeUTC * data = NULL;
  if (size) {
    data = (vectornav_msgs__msg__TimeUTC *)calloc(size, sizeof(vectornav_msgs__msg__TimeUTC));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vectornav_msgs__msg__TimeUTC__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vectornav_msgs__msg__TimeUTC__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
vectornav_msgs__msg__TimeUTC__Sequence__fini(vectornav_msgs__msg__TimeUTC__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vectornav_msgs__msg__TimeUTC__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

vectornav_msgs__msg__TimeUTC__Sequence *
vectornav_msgs__msg__TimeUTC__Sequence__create(size_t size)
{
  vectornav_msgs__msg__TimeUTC__Sequence * array = (vectornav_msgs__msg__TimeUTC__Sequence *)malloc(sizeof(vectornav_msgs__msg__TimeUTC__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vectornav_msgs__msg__TimeUTC__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vectornav_msgs__msg__TimeUTC__Sequence__destroy(vectornav_msgs__msg__TimeUTC__Sequence * array)
{
  if (array) {
    vectornav_msgs__msg__TimeUTC__Sequence__fini(array);
  }
  free(array);
}
