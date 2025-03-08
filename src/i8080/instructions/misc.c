#include "i8080/instructions/misc.h"

void NOP(CPU *cpu) { cpu->cycles += 4; }

void HLT(CPU *cpu) {
  (void)cpu;
  while (1) {
  }
}

void OUT_BYTE(CPU *cpu) { (void)cpu; }
