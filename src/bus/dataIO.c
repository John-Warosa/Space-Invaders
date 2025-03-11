#include "bus/dataIO.h"
#include "bus/memorymap.h"
#include "memory.h"

static void write_memory(uint16_t addr, uint8_t data);
static uint8_t read_memory(uint16_t addr);

void bus_write(Device device, uint16_t addr, uint8_t data) {
  switch (device) {

  case MEMORY:
    write_memory(addr, data);
    break;

  default:
    break;
  }
}

static void write_memory(uint16_t addr, uint8_t data) {
  if (is_addr_rom(addr)) {
    return;
  } else if (is_addr_ram(addr)) {
    write_ram(addr, data);
  } else if (is_addr_vram(addr)) {
    write_vram(addr, data);
  } else {
    write_ram(ram_addr_mirror(addr), data);
  }
}

uint8_t bus_read(Device device, uint16_t addr) {
  switch (device) {

  case MEMORY:
    return read_memory(addr);
    break;

  default:
    return 0;
    break;
  }
}

static uint8_t read_memory(uint16_t addr) {
  if (is_addr_rom(addr)) {
    return read_rom(addr);
  } else if (is_addr_ram(addr)) {
    return read_ram(addr);
  } else if (is_addr_vram(addr)) {
    return read_vram(addr);
  } else {
    return read_ram(ram_addr_mirror(addr));
  }
}
