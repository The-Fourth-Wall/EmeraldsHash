#ifndef __KOMIHASH_H_
#define __KOMIHASH_H_

#include <stddef.h> /* size_t */

/**
 * @brief Wrapper for the komihash hash function
 * @param key
 * @return size_t hash
 */
size_t komihash_hash(const char *key);

#endif
