void printCPU(struct CPU t)
{
    printf("Register A: 0x%x\n", t.A);
    printf("Register F: 0x%x\n", t.F);
    printf("Register B: 0x%x\n", t.B);
    printf("Register C: 0x%x\n", t.C);
    printf("Register D: 0x%x\n", t.D);
    printf("Register E: 0x%x\n", t.E);
    printf("Register H: 0x%x\n", t.H);
    printf("Register L: 0x%x\n", t.L);
}

void printSTACK(struct STACK t)
{
    printf("Stack Pointer: 0x%x\n", t.SP);
    int c = 0x0000;
    //while(c <= 0xffff) {
    //    printf("Stack data at %x: %d\n", c, t.data[c]);
    //   c = c + 0x0001;
    //}
}