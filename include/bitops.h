#ifndef BITOPS_H
#define BITOPS_H

#include <stdbool.h>
#include <stdint.h>

/*===================================================================

Bit operations

This library is intended to simplify bit manipulations
and prevent writing the same biolerplate over and over.
The library supports bit operations on up to 64 bit numbers.
To abstract away from unsigned integers, this library
provides typedefs for the common bit sizes.

Bit manipulation (results are returned):
  - bit_check: Check if a certain bit is set
  - bit_set: Set a certain bit
  - bit_toggle: Toggle a certain bit
  - bit_clear: Clear a certain bit
  - bit_toggle_all: Toggle all bits

Bit representation:
  - bit_bytesize: Change the number of bits per byte (max 64)
  - bit_print: Print number in binary format of specified length
               specify a delimiter to separate 8 bit chunks
  - bit_to_str: Return bit representation as a string
                String can contain max of 64 bits + spaces '\0'

===================================================================*/

typedef uint8_t bit8;
typedef uint16_t bit16;
typedef uint32_t bit32;
typedef uint64_t bit64;

static inline bool bit_check(bit64 num, uint8_t index) {
  return num & ((bit64)1 << index);
}

static inline bit64 bit_set(bit64 num, uint8_t index) {
  return num | ((bit64)1 << index);
}

static inline bit64 bit_toggle(bit64 num, uint8_t index) {
  return num ^ ((bit64)1 << index);
}

static inline bit64 bit_clear(bit64 num, uint8_t index) {
  return num & ~((bit64)1 << index);
}

static inline bit64 bit_toggle_all(bit64 num) { return num ^ ~((bit64)0); }

void bit_bytesize(uint8_t size);
void bit_print(bit64 num, uint8_t numBits);
char *bit_to_str(bit64 num, uint8_t numBits);

#endif // BITOPS_H
