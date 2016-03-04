
void ADD_A(struct CPU *t, struct IP *ip) {
    ip->loc++;
    t->A += t->A;
}

void ADD_B(struct CPU *t, struct IP *ip) {
    ip->loc++;
    t->A += t->B;
}

void ADD_C(struct CPU *t, struct IP *ip) {
    ip->loc++;
    t->A += t->C;
}

void ADD_D(struct CPU *t, struct IP *ip) {
    ip->loc++;
    t->A += t->D;
}

void ADD_E(struct CPU *t, struct IP *ip) {
    ip->loc++;
    t->A += t->E;
}

void ADD_H(struct CPU *t, struct IP *ip) {
    ip->loc++;
    t->A += t->H;
}

void ADD_L(struct CPU *t, struct IP *ip) {
    ip->loc++;
    t->A += t->L;
}

void execute(struct CPU *t, struct IP *ip, u_int inst[],  u_int e) {
    u_int c = 0;
    while(c < e) {
        switch(inst[c]){
            case OP_ADD_A: ADD_A(t,ip); break;
            case OP_ADD_B: ADD_B(t,ip); break;
            default: printf("UNKOWN OPCODE: 0x%x\n", inst[c]);
        }
        c++;
    }
}