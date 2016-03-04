u_int opcodes = {
    0x87
};

u_int o_size = {
    1
};

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

void execute(struct CPU *t, struct IP *ip, u_int inst[], u_int e) {
    c = 0;
    while(c <= e) {
        switch(inst[c]) {
            case opcodes[0]: ADD_A(&t, &ip); break;
            default: printf("UNKNOWN OPCODE\n"); ip->loc++;
        }
    }
}