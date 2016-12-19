
#define HWORD 8
#define WORD 16

#define u_int unsigned int

struct CPU {
  u_int A:HWORD;
  u_int F:HWORD;
  u_int B:HWORD;
  u_int C:HWORD;
  u_int D:HWORD;
  u_int E:HWORD;
  u_int H:HWORD;
  u_int L:HWORD;
};

struct STACK {
  u_int SP:WORD;
  u_int data[0xffff];
};

struct IP {
  u_int loc:WORD;
};

struct FLAGS {
  u_int flags:WORD;
};
