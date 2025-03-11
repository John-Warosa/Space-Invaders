#include "i8080/cpu.h"
#include "bus/dataIO.h"
#include "bus/memorymap.h"
#include "memory.h"
#include "render/render.h"

static inline uint8_t get_opcode(uint16_t PC) {
  return bus_read(MEMORY, PC);
  PC++;
}

void CPU_init(CPU *cpu) {
  // TODO: look up starting values for SP, PC, ...
  *cpu = (CPU){
      .PC = MAP_ROM,
      .flags = bit_set(0, FLAG_ALWAYS),
  };
}

void CPU_loop(CPU *cpu) {
  cpu->opcode = get_opcode(cpu->PC);
  render_screen(vram.data);
}
