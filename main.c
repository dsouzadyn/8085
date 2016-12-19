#include <stdio.h>
#include <stdbool.h>
#include "include/cpu.h"
#include "include/pfs.h"
#include "include/initfs.h"
#include "include/opcodes.h"
int main()
{
  struct CPU cpu;
  struct IP ip;
  initCPU(&cpu);
  initIP(&ip);
  struct STACK stack;
  initSTACK(&stack);
  printf("CPU size: 0x%lx\n", sizeof(cpu));
  printCPU(cpu);
  printf("STACK size: 0x%lx\n", sizeof(stack));
  printSTACK(stack);
  u_int ins[3] = {OP_ADD_A,OP_ADD_B};
  execute(&cpu, &ip, ins, 3);
  printCPU(cpu);
  return 0;
}
