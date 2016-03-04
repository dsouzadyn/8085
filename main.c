#include <stdio.h>
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
    printf("CPU size: 0x%x\n", sizeof(cpu));
    printCPU(cpu);
    printf("STACK size: 0x%x\n", sizeof(stack));
    printSTACK(stack);
    u_int ins[3] = {0x87,0x80,0x87};
    execute(&cpu, &ip, ins, 3);
    printCPU(cpu);
    return 0;
}


