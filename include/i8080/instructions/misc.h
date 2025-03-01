#ifndef MISC_H
#define MISC_H

#include "types/instruction.h"

// Nothing happens, continues to next instruction
// Takes up 1 Byte and 4 CPU cycles
// Affects no flags
instruction NOP;

// Increases PC and halts the CPU until interrupt
// Takes up 1 Byte and 7 CPU cycles
// Affects no flags NOTE: not 100% sure...
instruction HLT;

// Sends content of Accumulator to output device <BYTE>
// Takes up 2 Bytes and 10 CPU cycles
// Affects no flags
instruction OUT_BYTE;

// Places data from input device <BYTE> into Accumulator
// Takes up 2 Bytes and 10 CPU cycles
// Affects no flags
instruction IN_BYTE;

// Resets INTE flip-flop, CPU ignores interrupts
// Takes up 1 Byte and 4 CPU cycles
// Affects no flags
instruction DI;

// Sets INTE flip-flop, CPU processes interrupts
// Takes up 1 Byte and 4 CPU cycles
// Affects no flags
instruction EI;

#endif // MISC_H
