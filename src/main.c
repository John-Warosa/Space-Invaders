#include "i8080/cpu.h"

int main(void) {
  static CPU cpu;
  CPU_init(&cpu);
}
