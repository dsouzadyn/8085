void initCPU(struct CPU *);
void initSTACK(struct STACK *);
void initIP(struct IP *);
void initFLAGS(struct FLAGS *);
void updateFLAGS(struct FLAGS *, u_int);
#define NULL_8 0x00
#define NULL_16 0x0000
#include "initfs.c"
