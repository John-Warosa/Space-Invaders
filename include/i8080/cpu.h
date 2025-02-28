#ifndef CPU_H
#define CPU_H

#include <stdint.h>

// Bits set in corresponding flag position
enum CPU_Flags {
  FLAG_CARRY = (1u << 0),
  FLAG_ALWAYS = (1u << 1), // Always set to 1
  FLAG_PARITY = (1u << 2),
  FLAG_AUX_CARRY = (1u << 4),
  FLAG_ZERO = (1u << 6),
  FLAG_SIGN = (1u << 7),
};

typedef struct {
  // Registers
  uint8_t regA; // Accumulator
  uint8_t regB, regC, regD, regE, regH, regL;
  uint8_t flags;

  // pointers
  uint16_t SP;
  uint16_t PC;
} CPU;

CPU CPU_init(void);

#endif // CPU_H
