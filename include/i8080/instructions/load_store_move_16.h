#ifndef LOAD_STORE_MOVE_16_H
#define LOAD_STORE_MOVE_16_H

#include "types/instruction.h"

/* Stores the value of <WORD> in the register pair B/C
Takes up 3 Bytes and 10 CPU cycles
Affects no flags */
instruction LXI_B_WORD;

/* Stores the value of <WORD> in the register pair D/E
Takes up 3 Bytes and 10 CPU cycles
Affects no flags */
instruction LXI_D_WORD;

/* Stores the value of <WORD> in the register pair H/L
Takes up 3 Bytes and 10 CPU cycles
Affects no flags */
instruction LXI_H_WORD;

/* Stores the value of <WORD> in the Stack Pointer
Takes up 3 Bytes and 10 CPU cycles
Affects no flags */
instruction LXI_SP_WORD;

/* Stores content of L at <ADDR> and the content of H
at <ADDR> + 1
Takes up 3 Bytes and 16 CPU cycles
Affects no flags */
instruction SHLD_ADDR;

/* The content of <ADDR> is stored in L and the content
of <ADDR> + 1 in H
Takes up 3 Bytes and 16 CPU cycles
Affects no flags*/
instruction LHLD_ADDR;

instruction POP_B;

instruction POP_D;

instruction POP_H;

instruction POP_PSW;

#endif // LOAD_STORE_MOVE_16
