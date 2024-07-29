#include "fnv_1a_64.h"

#include <stdint.h> /* uint8_t */
#include <string.h> /* strlen */

size_t fnv_1a_64_hash(const char *key) {
  size_t hash = 14695981039346656037u;
  size_t size = strlen(key);

  for(size_t i = 0; i < size; i++) {
    hash ^= (uint8_t)key[i];
    hash *= 1099511628211;
  }

  return hash;
}
