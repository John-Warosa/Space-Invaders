#include "i8080/cpu.h"
#include "render/render.h"

int main(void) {
  static CPU cpu;
  CPU_init(&cpu);
  render_init();
  CPU_loop(&cpu);
}
