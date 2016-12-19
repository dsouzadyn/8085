void initCPU(struct CPU *t)
{
  t->A = NULL_16;
  t->F = NULL_8;
  t->B = NULL_8;
  t->C = NULL_8;
  t->D = NULL_8;
  t->E = NULL_8;
  t->H = NULL_8;
  t->L = NULL_8;
}

void initSTACK(struct STACK *t)
{
  t->SP = NULL_16;
  int c = 0x0000;
  while(c <= 0xffff) {
    t->data[c] = NULL_16;
    c = c + 0x0001;
  }
}

void initIP(struct IP *t)
{
  t->loc = NULL_16;
}

void initFLAGS(struct FLAGS *f) {
  f->flags = 0;
}

void updateFLAGS(struct FLAGS *f, u_int flags) {
  f->flags |= (flags & 0b11010101);
}
