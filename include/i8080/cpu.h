#ifndef CPU_H
#define CPU_H

#include "bitops.h"
// #include "bus/dataIO.h"
#include <stddef.h>
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
  bit8 flags;

  // pointers
  uint16_t SP;
  uint16_t PC;

  size_t cycles;
  uint8_t opcode;
} CPU;

void CPU_init(CPU *cpu);

void CPU_loop(CPU *cpu);

#endif // CPU_H
