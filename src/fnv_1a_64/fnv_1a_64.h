#ifndef __FNV_1A_64_H_
#define __FNV_1A_64_H_

#include <stddef.h> /* size_t */

/**
 * @brief Implementation of the fnv reverse (xor first, mult later)
 * @param key
 * @return size_t hash
 */
size_t fnv_1a_64_hash(const char *key);

#endif
