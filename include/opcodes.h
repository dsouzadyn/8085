#define OP_ADD_A 0x87
#define OP_ADD_B 0x80

void execute(struct CPU *, struct IP *, u_int [], u_int);
void ADD_A(struct CPU *, struct IP *);
void ADD_B(struct CPU *, struct IP *);
void ADD_C(struct CPU *, struct IP *);
void ADD_D(struct CPU *, struct IP *);
void ADD_E(struct CPU *, struct IP *);
void ADD_H(struct CPU *, struct IP *);
void ADD_L(struct CPU *, struct IP *);
#include "opcodes.c"