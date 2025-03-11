#ifndef JUMPS_CALLS_H
#define JUMPS_CALLS_H

#include "types/instruction.h"

// Return if zero bit is not set
// Takes up 1 Byte and 11/5 CPU cycles
// Affects no flags
instruction RNZ;

// Return if carry bit is not set
// Takes up 1 Byte and 11/5 CPU cycles
// Affects no flags
instruction RNC;

// Return if parity bit is not set
// Takes up 1 Byte and 11/5 CPU cycles
// Affects no flags
instruction RPO;

// Return if sign bit is not set
// Takes up 1 Byte and 11/5 CPU cycles
// Affects no flags
instruction RP;

// jump to <ADDR> if zero bit is not set
// Takes up 3 Bytes and 10 CPU cycles
// Affects no flags
instruction JNZ_ADDR;

// Jump to <ADDR> if carry bit is not set
// Takes up 3 Bytes and 10 CPU cycles
// Affects no flags
instruction JNC_ADDR;

// Jump to <ADDR> if parity bit is not set
// Takes up 3 Bytes and 10 CPU cycles
// Affects no flags
instruction JPO_ADDR;

// Jump to <ADDR> if sign bit is not set
// Takes up 3 Bytes and 10 CPU cycles
// Affects no flags
instruction JP_ADDR;

// Jump to <ADDR>
// Takes up 3 Bytes and 10 CPU cycles
// Affects no flags
instruction JMP_ADDR;

#endif // JUMPS_CALLS_H
