#ifndef OPTABLE_H
#define OPTABLE_H

#include "i8080/cpu.h"

typedef void (*instruction)(CPU *cpu);

extern instruction const optable[];

#endif // OPTABLE_H
