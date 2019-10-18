/*
Copyright 2019 Andy Curtis

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#include "stla_conv.h"

#include <stdio.h>

const char *stla_str(const char *value, const char *default_value) {
  if (value)
    return value;
  return default_value;
}

bool stla_bool(const char *value, bool default_value) {
  if (!value)
    return default_value;

  if (default_value) {
    if (*value == '0' || *value == 'f' || *value == 'F')
      return false;
    return true;
  } else {
    if (*value == '1' || *value == 't' || *value == 'T')
      return true;
    return false;
  }
}

int stla_int(const char *value, int default_value) {
  if (!value)
    return default_value;

  int res = 0;
  if (sscanf(value, "%d", &res) == 1)
    return res;
  return default_value;
}

long stla_long(const char *value, long default_value) {
  if (!value)
    return default_value;

  long res = 0;
  if (sscanf(value, "%ld", &res) == 1)
    return res;
  return default_value;
}

double stla_double(const char *value, double default_value) {
  if (!value)
    return default_value;

  double res = 0;
  if (sscanf(value, "%lf", &res) == 1)
    return res;
  return default_value;
}

int32_t stla_int32_t(const char *value, int32_t default_value) {
  if (!value)
    return default_value;

  int32_t res = 0;
  if (sscanf(value, "%d", &res) == 1)
    return res;
  return default_value;
}

uint32_t stla_uint32_t(const char *value, uint32_t default_value) {
  if (!value)
    return default_value;

  uint32_t res = 0;
  if (sscanf(value, "%u", &res) == 1)
    return res;
  return default_value;
}

int64_t stla_int64_t(const char *value, int64_t default_value) {
  if (!value)
    return default_value;

  int64_t res = 0;
  if (sscanf(value, "%lld", &res) == 1)
    return res;
  return default_value;
}

uint64_t stla_uint64_t(const char *value, uint64_t default_value) {
  if (!value)
    return default_value;

  uint64_t res = 0;
  if (sscanf(value, "%llu", &res) == 1)
    return res;
  return default_value;
}
