#include "komihash.h"

#include "komihash_implementation.h"

size_t komihash_hash(const char *key) {
  return komihash(key, strlen(key), 0x0123456789abcdef);
}
