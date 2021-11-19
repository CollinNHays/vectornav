// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from vectornav_msgs:msg/AttitudeGroup.idl
// generated code does not contain a copyright notice
#include "vectornav_msgs/msg/detail/attitude_group__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `vpestatus`
#include "vectornav_msgs/msg/detail/vpe_status__functions.h"
// Member `yawpitchroll`
// Member `magned`
// Member `accelned`
// Member `linearaccelbody`
// Member `linearaccelned`
// Member `ypru`
#include "geometry_msgs/msg/detail/vector3__functions.h"
// Member `quaternion`
#include "geometry_msgs/msg/detail/quaternion__functions.h"

bool
vectornav_msgs__msg__AttitudeGroup__init(vectornav_msgs__msg__AttitudeGroup * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  // group_fields
  // vpestatus
  if (!vectornav_msgs__msg__VpeStatus__init(&msg->vpestatus)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  // yawpitchroll
  if (!geometry_msgs__msg__Vector3__init(&msg->yawpitchroll)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  // quaternion
  if (!geometry_msgs__msg__Quaternion__init(&msg->quaternion)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  // dcm
  // magned
  if (!geometry_msgs__msg__Vector3__init(&msg->magned)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  // accelned
  if (!geometry_msgs__msg__Vector3__init(&msg->accelned)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  // linearaccelbody
  if (!geometry_msgs__msg__Vector3__init(&msg->linearaccelbody)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  // linearaccelned
  if (!geometry_msgs__msg__Vector3__init(&msg->linearaccelned)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  // ypru
  if (!geometry_msgs__msg__Vector3__init(&msg->ypru)) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
    return false;
  }
  return true;
}

void
vectornav_msgs__msg__AttitudeGroup__fini(vectornav_msgs__msg__AttitudeGroup * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // group_fields
  // vpestatus
  vectornav_msgs__msg__VpeStatus__fini(&msg->vpestatus);
  // yawpitchroll
  geometry_msgs__msg__Vector3__fini(&msg->yawpitchroll);
  // quaternion
  geometry_msgs__msg__Quaternion__fini(&msg->quaternion);
  // dcm
  // magned
  geometry_msgs__msg__Vector3__fini(&msg->magned);
  // accelned
  geometry_msgs__msg__Vector3__fini(&msg->accelned);
  // linearaccelbody
  geometry_msgs__msg__Vector3__fini(&msg->linearaccelbody);
  // linearaccelned
  geometry_msgs__msg__Vector3__fini(&msg->linearaccelned);
  // ypru
  geometry_msgs__msg__Vector3__fini(&msg->ypru);
}

vectornav_msgs__msg__AttitudeGroup *
vectornav_msgs__msg__AttitudeGroup__create()
{
  vectornav_msgs__msg__AttitudeGroup * msg = (vectornav_msgs__msg__AttitudeGroup *)malloc(sizeof(vectornav_msgs__msg__AttitudeGroup));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(vectornav_msgs__msg__AttitudeGroup));
  bool success = vectornav_msgs__msg__AttitudeGroup__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
vectornav_msgs__msg__AttitudeGroup__destroy(vectornav_msgs__msg__AttitudeGroup * msg)
{
  if (msg) {
    vectornav_msgs__msg__AttitudeGroup__fini(msg);
  }
  free(msg);
}


bool
vectornav_msgs__msg__AttitudeGroup__Sequence__init(vectornav_msgs__msg__AttitudeGroup__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  vectornav_msgs__msg__AttitudeGroup * data = NULL;
  if (size) {
    data = (vectornav_msgs__msg__AttitudeGroup *)calloc(size, sizeof(vectornav_msgs__msg__AttitudeGroup));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = vectornav_msgs__msg__AttitudeGroup__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        vectornav_msgs__msg__AttitudeGroup__fini(&data[i - 1]);
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
vectornav_msgs__msg__AttitudeGroup__Sequence__fini(vectornav_msgs__msg__AttitudeGroup__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      vectornav_msgs__msg__AttitudeGroup__fini(&array->data[i]);
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

vectornav_msgs__msg__AttitudeGroup__Sequence *
vectornav_msgs__msg__AttitudeGroup__Sequence__create(size_t size)
{
  vectornav_msgs__msg__AttitudeGroup__Sequence * array = (vectornav_msgs__msg__AttitudeGroup__Sequence *)malloc(sizeof(vectornav_msgs__msg__AttitudeGroup__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = vectornav_msgs__msg__AttitudeGroup__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
vectornav_msgs__msg__AttitudeGroup__Sequence__destroy(vectornav_msgs__msg__AttitudeGroup__Sequence * array)
{
  if (array) {
    vectornav_msgs__msg__AttitudeGroup__Sequence__fini(array);
  }
  free(array);
}
