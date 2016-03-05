#define OP_ACI 0xce
#define OP_ADC_A 0x8f
#define OP_ADC_B 0x88
#define OP_ADC_C 0x89
#define OP_ADC_D 0x8a
#define OP_ADC_E 0x8b
#define OP_ADC_H 0x8c
#define OP_ADC_L 0x8d
#define OP_ADC_M 0x8e
#define OP_ADD_A 0x87
#define OP_ADD_B 0x80
#define OP_ADD_C 0x81
#define OP_ADD_D 0x82
#define OP_ADD_E 0x83
#define OP_ADD_H 0x84
#define OP_ADD_L 0x85
#define OP_ADD_M 0x86
#define OP_ADI   0xc6
#define OP_ANA_A 0xa7
#define OP_ANA_B 0xa0
#define OP_ANA_C 0xa1
#define OP_ANA_D 0xa2
#define OP_ANA_E 0xa3
#define OP_ANA_H 0xa4
#define OP_ANA_L 0xa5
#define OP_ANA_M 0xa6
#define OP_ANI   0xe6
#define OP_CALL  0xcd

void execute(struct CPU *, struct IP *, u_int [], u_int);
void ACI(struct CPU *, struct IP *);
void ADC_A(struct CPU *, struct IP *);
void ADC_B(struct CPU *, struct IP *);
void ADC_C(struct CPU *, struct IP *);
void ADC_D(struct CPU *, struct IP *);
void ADC_E(struct CPU *, struct IP *);
void ADC_H(struct CPU *, struct IP *);
void ADC_L(struct CPU *, struct IP *);
void ADC_M(struct CPU *, struct IP *);
void ADD_A(struct CPU *, struct IP *);
void ADD_B(struct CPU *, struct IP *);
void ADD_C(struct CPU *, struct IP *);
void ADD_D(struct CPU *, struct IP *);
void ADD_E(struct CPU *, struct IP *);
void ADD_H(struct CPU *, struct IP *);
void ADD_L(struct CPU *, struct IP *);
void ADD_M(struct CPU *, struct IP *);
#include "opcodes.c"