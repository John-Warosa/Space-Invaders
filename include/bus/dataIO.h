#ifndef DATAIO_H
#define DATAIO_H

#include <stdint.h>

typedef enum {
  MEMORY,
  OUTPUT,
  INPUT,
} Device;

void bus_write(Device device, uint16_t addr, uint8_t data);
uint8_t bus_read(Device device, uint16_t addr);

#endif // DATAIO_H
