#include <stdio.h>
#include "include/cpu.h"
#include "include/pfs.h"
#include "include/initfs.h"
int main()
{
    struct CPU cpu;
    initCPU(&cpu);
    struct STACK stack;
    initSTACK(&stack);
    printf("CPU size: 0x%x\n", sizeof(cpu));
    printCPU(cpu);
    printf("STACK size: 0x%x\n", sizeof(stack));
    printSTACK(stack);
    return 0;
}


