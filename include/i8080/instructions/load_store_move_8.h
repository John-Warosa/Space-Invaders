#ifndef LOAD_STORE_MOVE_8_H
#define LOAD_STORE_MOVE_8_H

#include "types/instruction.h"

// TODO: Add rest
//

// The following MOV instructions all have the same profile:
//   Move content from right register to the left
//   Takes up 1 Byte and 5 CPU cycles
//   Affects no flags

instruction MOV_A_A;
instruction MOV_A_B;
instruction MOV_A_C;
instruction MOV_A_D;
instruction MOV_A_E;
instruction MOV_A_H;
instruction MOV_A_L;

instruction MOV_B_A;
instruction MOV_B_B;
instruction MOV_B_C;
instruction MOV_B_D;
instruction MOV_B_E;
instruction MOV_B_H;
instruction MOV_B_L;

instruction MOV_C_A;
instruction MOV_C_B;
instruction MOV_C_C;
instruction MOV_C_D;
instruction MOV_C_E;
instruction MOV_C_H;
instruction MOV_C_L;

instruction MOV_D_A;
instruction MOV_D_B;
instruction MOV_D_C;
instruction MOV_D_D;
instruction MOV_D_E;
instruction MOV_D_H;
instruction MOV_D_L;

instruction MOV_E_A;
instruction MOV_E_B;
instruction MOV_E_C;
instruction MOV_E_D;
instruction MOV_E_E;
instruction MOV_E_H;
instruction MOV_E_L;

instruction MOV_H_A;
instruction MOV_H_B;
instruction MOV_H_C;
instruction MOV_H_D;
instruction MOV_H_E;
instruction MOV_H_H;
instruction MOV_H_L;

instruction MOV_L_A;
instruction MOV_L_B;
instruction MOV_L_C;
instruction MOV_L_D;
instruction MOV_L_E;
instruction MOV_L_H;
instruction MOV_L_L;

// The following MOV instructions all have the same profile:
//   Move content from right register to the left
//   M is formed by taking the the L register as the low byte and
//   the H register as the high byte of a memory address
//   Takes up 1 Byte and 7 CPU cycles
//   Affects no flags

instruction MOV_A_M;
instruction MOV_B_M;
instruction MOV_C_M;
instruction MOV_D_M;
instruction MOV_E_M;
instruction MOV_H_M;
instruction MOV_L_M;

instruction MOV_M_A;
instruction MOV_M_B;
instruction MOV_M_C;
instruction MOV_M_D;
instruction MOV_M_E;
instruction MOV_M_H;
instruction MOV_M_L;

#endif // LOAD_STORE_MOVE_8_H
