#ifndef DATAIO_H
#define DATAIO_H

#include <stdint.h>

typedef enum {
  READ,
  WRITE,
  WAIT,
} BusAction;

typedef enum {
  DEVICE_CPU,
  DEVICE_RAM,
} TargetDevice;

typedef struct {
  BusAction action;
  TargetDevice device;
  uint16_t data;
} BusInterface;

static inline BusInterface no_bus(void) {
  return (BusInterface){.action = WAIT};
}

#endif // DATAIO_H
