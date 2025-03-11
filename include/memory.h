#ifndef MEMORY_H
#define MEMORY_H

#include "bus/memorymap.h"
#include <stdint.h>

typedef struct {
  uint8_t data[SIZE_ROM];
} ROM;

typedef struct {
  uint8_t data[SIZE_RAM];
} RAM;

typedef struct {
  uint8_t data[SIZE_VRAM];
} VRAM;

extern ROM rom;
extern RAM ram;
extern VRAM vram;

static inline uint8_t read_rom(uint16_t addr) { return rom.data[addr]; }
static inline uint8_t read_ram(uint16_t addr) { return ram.data[addr]; }
static inline uint8_t read_vram(uint16_t addr) { return ram.data[addr]; }

static inline void write_ram(uint16_t addr, uint8_t value) {
  ram.data[addr] = value;
}

static inline void write_vram(uint16_t addr, uint8_t value) {
  vram.data[addr] = value;
}

#endif // MEMORY_H
