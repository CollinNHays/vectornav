// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vectornav_msgs:msg/InsGroup.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/ins_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `insstatus`
#include "vectornav_msgs/msg/detail/ins_status__functions.h"
// Member `poslla`
// Member `posecef`
#include "geometry_msgs/msg/detail/point__functions.h"
// Member `velbody`
// Member `velned`
// Member `velecef`
// Member `magecef`
// Member `accelecef`
// Member `linearaccelecef`
#include "geometry_msgs/msg/detail/vector3__functions.h"

bool
vectornav_msgs__msg__InsGroup__init(vectornav_msgs__msg__InsGroup * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // group_fields
  // insstatus
  if (!vectornav_msgs__msg__InsStatus__init(&msg->insstatus)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // poslla
  if (!geometry_msgs__msg__Point__init(&msg->poslla)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // posecef
  if (!geometry_msgs__msg__Point__init(&msg->posecef)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // velbody
  if (!geometry_msgs__msg__Vector3__init(&msg->velbody)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // velned
  if (!geometry_msgs__msg__Vector3__init(&msg->velned)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // velecef
  if (!geometry_msgs__msg__Vector3__init(&msg->velecef)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // magecef
  if (!geometry_msgs__msg__Vector3__init(&msg->magecef)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // accelecef
  if (!geometry_msgs__msg__Vector3__init(&msg->accelecef)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // linearaccelecef
  if (!geometry_msgs__msg__Vector3__init(&msg->linearaccelecef)) {
    vectornav_msgs__msg__InsGroup__fini(msg);
    return false;
  }
  // posu
  // velu
  return true;
}

void
vectornav_msgs__msg__InsGroup__fini(vectornav_msgs__msg__InsGroup * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // group_fields
  // insstatus
  vectornav_msgs__msg__InsStatus__fini(&msg->insstatus);
  // poslla
  geometry_msgs__msg__Point__fini(&msg->poslla);
  // posecef
  geometry_msgs__msg__Point__fini(&msg->posecef);
  // velbody
  geometry_msgs__msg__Vector3__fini(&msg->velbody);
  // velned
  geometry_msgs__msg__Vector3__fini(&msg->velned);
  // velecef
  geometry_msgs__msg__Vector3__fini(&msg->velecef);
  // magecef
  geometry_msgs__msg__Vector3__fini(&msg->magecef);
  // accelecef
  geometry_msgs__msg__Vector3__fini(&msg->accelecef);
  // linearaccelecef
  geometry_msgs__msg__Vector3__fini(&msg->linearaccelecef);
  // posu
  // velu
}

vectornav_msgs__msg__InsGroup *
vectornav_msgs__msg__InsGroup__create()
{
  vectornav_msgs__msg__InsGroup * msg = (vectornav_msgs__msg__InsGroup *)malloc(sizeof(vectornav_msgs__msg__InsGroup));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vectornav_msgs__msg__InsGroup));
  bool success = vectornav_msgs__msg__InsGroup__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vectornav_msgs__msg__InsGroup__destroy(vectornav_msgs__msg__InsGroup * msg)
{
  if (msg) {
    vectornav_msgs__msg__InsGroup__fini(msg);
  }
  free(msg);
}


bool
vectornav_msgs__msg__InsGroup__Sequence__init(vectornav_msgs__msg__InsGroup__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vectornav_msgs__msg__InsGroup * data = NULL;
  if (size) {
    data = (vectornav_msgs__msg__InsGroup *)calloc(size, sizeof(vectornav_msgs__msg__InsGroup));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vectornav_msgs__msg__InsGroup__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vectornav_msgs__msg__InsGroup__fini(&data[i - 1]);
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
vectornav_msgs__msg__InsGroup__Sequence__fini(vectornav_msgs__msg__InsGroup__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vectornav_msgs__msg__InsGroup__fini(&array->data[i]);
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

vectornav_msgs__msg__InsGroup__Sequence *
vectornav_msgs__msg__InsGroup__Sequence__create(size_t size)
{
  vectornav_msgs__msg__InsGroup__Sequence * array = (vectornav_msgs__msg__InsGroup__Sequence *)malloc(sizeof(vectornav_msgs__msg__InsGroup__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vectornav_msgs__msg__InsGroup__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vectornav_msgs__msg__InsGroup__Sequence__destroy(vectornav_msgs__msg__InsGroup__Sequence * array)
{
  if (array) {
    vectornav_msgs__msg__InsGroup__Sequence__fini(array);
  }
  free(array);
}
