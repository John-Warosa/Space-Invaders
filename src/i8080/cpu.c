#include "i8080/cpu.h"
#include "i8080/memorymap.h"
#include "render/render.h"

void CPU_init(CPU *cpu) {
  // TODO: look up starting values for SP, PC, ...
  *cpu = (CPU){
      .flags = bit_set(0, FLAG_ALWAYS),
  };
}

#include "raylib.h"
void CPU_loop(CPU *cpu) {
  while (!WindowShouldClose()) {
    render_screen(&cpu->ram[MAP_VRAM]);
  }
}
