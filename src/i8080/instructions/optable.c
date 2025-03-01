#include "i8080/instructions/optable.h"
#include "i8080/instructions/misc.h"

instruction const optable[0x100] = {
    [0x00] = NOP, [0x10] = NOP, [0x20] = NOP, [0x30] = NOP,
    [0x08] = NOP, [0x18] = NOP, [0x28] = NOP, [0x38] = NOP,
};
