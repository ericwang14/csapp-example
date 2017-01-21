#include <stdio.h>

long fun_b(unsigned long x) {
  long val = 0;
  long i;
  for (i = 64; i != 0; i--) {
    val = (val << 1) | (x & 0x1);
    x >>= 1;
  }
  return val;
}

void print_bits(unsigned long x) {
  printf("unsigned long number: %lu \n", x);
  for (int i = 0; i <(sizeof(unsigned long)*8); i++) {
    printf("%u ", x&0x1 ? 1: 0);
    x >>= 1;
  }

}
