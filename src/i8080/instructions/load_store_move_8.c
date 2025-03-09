#include "i8080/instructions/load_store_move_8.h"
#include <stdint.h>

#define CCAT_8_BIT(high, low) (((uint16_t)(high) << 8) + (uint16_t)(low))

void MOV_A_A(CPU *cpu) {
  cpu->regA = cpu->regA;
  cpu->cycles += 5;
}

void MOV_A_B(CPU *cpu) {
  cpu->regA = cpu->regB;
  cpu->cycles += 5;
}

void MOV_A_C(CPU *cpu) {
  cpu->regA = cpu->regC;
  cpu->cycles += 5;
}

void MOV_A_D(CPU *cpu) {
  cpu->regA = cpu->regD;
  cpu->cycles += 5;
}

void MOV_A_E(CPU *cpu) {
  cpu->regA = cpu->regE;
  cpu->cycles += 5;
}

void MOV_A_H(CPU *cpu) {
  cpu->regA = cpu->regH;
  cpu->cycles += 5;
}

void MOV_A_L(CPU *cpu) {
  cpu->regA = cpu->regL;
  cpu->cycles += 5;
}

void MOV_B_A(CPU *cpu) {
  cpu->regB = cpu->regA;
  cpu->cycles += 5;
}

void MOV_B_B(CPU *cpu) {
  cpu->regB = cpu->regB;
  cpu->cycles += 5;
}

void MOV_B_C(CPU *cpu) {
  cpu->regB = cpu->regC;
  cpu->cycles += 5;
}

void MOV_B_D(CPU *cpu) {
  cpu->regB = cpu->regD;
  cpu->cycles += 5;
}

void MOV_B_E(CPU *cpu) {
  cpu->regB = cpu->regE;
  cpu->cycles += 5;
}

void MOV_B_H(CPU *cpu) {
  cpu->regB = cpu->regH;
  cpu->cycles += 5;
}

void MOV_B_L(CPU *cpu) {
  cpu->regB = cpu->regL;
  cpu->cycles += 5;
}

void MOV_C_A(CPU *cpu) {
  cpu->regC = cpu->regA;
  cpu->cycles += 5;
}

void MOV_C_B(CPU *cpu) {
  cpu->regC = cpu->regB;
  cpu->cycles += 5;
}

void MOV_C_C(CPU *cpu) {
  cpu->regC = cpu->regC;
  cpu->cycles += 5;
}

void MOV_C_D(CPU *cpu) {
  cpu->regC = cpu->regD;
  cpu->cycles += 5;
}

void MOV_C_E(CPU *cpu) {
  cpu->regC = cpu->regE;
  cpu->cycles += 5;
}

void MOV_C_H(CPU *cpu) {
  cpu->regC = cpu->regH;
  cpu->cycles += 5;
}

void MOV_C_L(CPU *cpu) {
  cpu->regC = cpu->regL;
  cpu->cycles += 5;
}

void MOV_D_A(CPU *cpu) {
  cpu->regC = cpu->regA;
  cpu->cycles += 5;
}

void MOV_D_B(CPU *cpu) {
  cpu->regC = cpu->regB;
  cpu->cycles += 5;
}

void MOV_D_C(CPU *cpu) {
  cpu->regC = cpu->regC;
  cpu->cycles += 5;
}

void MOV_D_D(CPU *cpu) {
  cpu->regC = cpu->regD;
  cpu->cycles += 5;
}

void MOV_D_E(CPU *cpu) {
  cpu->regC = cpu->regE;
  cpu->cycles += 5;
}

void MOV_D_H(CPU *cpu) {
  cpu->regC = cpu->regH;
  cpu->cycles += 5;
}

void MOV_D_L(CPU *cpu) {
  cpu->regC = cpu->regL;
  cpu->cycles += 5;
}

void MOV_E_A(CPU *cpu) {
  cpu->regE = cpu->regA;
  cpu->cycles += 5;
}

void MOV_E_B(CPU *cpu) {
  cpu->regE = cpu->regB;
  cpu->cycles += 5;
}

void MOV_E_C(CPU *cpu) {
  cpu->regE = cpu->regC;
  cpu->cycles += 5;
}

void MOV_E_D(CPU *cpu) {
  cpu->regE = cpu->regD;
  cpu->cycles += 5;
}

void MOV_E_E(CPU *cpu) {
  cpu->regE = cpu->regE;
  cpu->cycles += 5;
}

void MOV_E_H(CPU *cpu) {
  cpu->regE = cpu->regH;
  cpu->cycles += 5;
}

void MOV_E_L(CPU *cpu) {
  cpu->regE = cpu->regL;
  cpu->cycles += 5;
}

void MOV_H_A(CPU *cpu) {
  cpu->regH = cpu->regA;
  cpu->cycles += 5;
}

void MOV_H_B(CPU *cpu) {
  cpu->regH = cpu->regB;
  cpu->cycles += 5;
}

void MOV_H_C(CPU *cpu) {
  cpu->regH = cpu->regC;
  cpu->cycles += 5;
}

void MOV_H_D(CPU *cpu) {
  cpu->regH = cpu->regD;
  cpu->cycles += 5;
}

void MOV_H_E(CPU *cpu) {
  cpu->regH = cpu->regE;
  cpu->cycles += 5;
}

void MOV_H_H(CPU *cpu) {
  cpu->regH = cpu->regH;
  cpu->cycles += 5;
}

void MOV_H_L(CPU *cpu) {
  cpu->regH = cpu->regL;
  cpu->cycles += 5;
}

void MOV_L_A(CPU *cpu) {
  cpu->regL = cpu->regA;
  cpu->cycles += 5;
}

void MOV_L_B(CPU *cpu) {
  cpu->regL = cpu->regB;
  cpu->cycles += 5;
}

void MOV_L_C(CPU *cpu) {
  cpu->regL = cpu->regC;
  cpu->cycles += 5;
}

void MOV_L_D(CPU *cpu) {
  cpu->regL = cpu->regD;
  cpu->cycles += 5;
}

void MOV_L_E(CPU *cpu) {
  cpu->regL = cpu->regE;
  cpu->cycles += 5;
}

void MOV_L_H(CPU *cpu) {
  cpu->regL = cpu->regH;
  cpu->cycles += 5;
}

void MOV_L_L(CPU *cpu) {
  cpu->regL = cpu->regL;
  cpu->cycles += 5;
}

void MOV_A_M(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->regA = cpu->ram[addr];
}

void MOV_B_M(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->regB = cpu->ram[addr];
}

void MOV_C_M(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->regC = cpu->ram[addr];
}

void MOV_D_M(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->regD = cpu->ram[addr];
}

void MOV_E_M(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->regE = cpu->ram[addr];
}

void MOV_H_M(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->regH = cpu->ram[addr];
}

void MOV_L_M(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->regL = cpu->ram[addr];
}

void MOV_M_A(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->ram[addr] = cpu->regA;
}

void MOV_M_B(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->ram[addr] = cpu->regB;
}

void MOV_M_C(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->ram[addr] = cpu->regC;
}

void MOV_M_D(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->ram[addr] = cpu->regD;
}

void MOV_M_E(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->ram[addr] = cpu->regE;
}

void MOV_M_H(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->ram[addr] = cpu->regH;
}

void MOV_M_L(CPU *cpu) {
  uint16_t addr = CCAT_8_BIT(cpu->regH, cpu->regL);
  cpu->ram[addr] = cpu->regL;
}
