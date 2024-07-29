#include "xxh3.h"

#define XXH_STATIC_LINKING_ONLY
#define XXH_IMPLEMENTATION
#include "xxh3_implementation.h"

size_t xxh3_hash(const char *key) { return XXH3_64bits(key, strlen(key)); }
