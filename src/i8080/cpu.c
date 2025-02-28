#include "i8080/cpu.h"

CPU CPU_init(void) {
  // TODO: look up starting values for SP, PC, ...
  return (CPU){.flags = FLAG_ALWAYS};
}
