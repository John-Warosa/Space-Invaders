#include "i8080/cpu.h"

void CPU_init(CPU *cpu) {
  // TODO: look up starting values for SP, PC, ...
  *cpu = (CPU){
      .flags = bit_set(0, FLAG_ALWAYS),
  };
}
