#ifndef MEMORYMAP_H
#define MEMORYMAP_H

#include <stdbool.h>
#include <stdint.h>

enum MemoryMap {
  MAP_ROM = 0x0000,
  MAP_RAM = 0x2000,
  MAP_VRAM = 0x2400,
  MAP_END = 0x4000,
};

enum MemorySize {
  SIZE_ROM = MAP_RAM - MAP_ROM,
  SIZE_RAM = MAP_VRAM - MAP_RAM,
  SIZE_VRAM = MAP_END - MAP_VRAM,
};

static inline bool is_addr_rom(uint16_t addr) {
  return (MAP_ROM <= addr) && (addr < MAP_RAM);
}

static inline bool is_addr_ram(uint16_t addr) {
  return (MAP_RAM <= addr) && (addr < MAP_VRAM);
}

static inline bool is_addr_vram(uint16_t addr) {
  return (MAP_VRAM <= addr) && (addr < MAP_END);
}

static inline uint16_t ram_addr_mirror(uint16_t addr) {
  return MAP_RAM + (addr - MAP_END) % SIZE_RAM;
}

#endif // MEMORYMAP_H
