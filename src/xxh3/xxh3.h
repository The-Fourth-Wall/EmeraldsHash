#ifndef __XXH3_H_
#define __XXH3_H_

#include <stddef.h> /* size_t */

/**
 * @brief Wrapper for the xxh3 hash function
 * @param key
 * @return size_t hash
 */
size_t xxh3_hash(const char *key);

#endif
