#include <stdio.h>

typedef unsigned char *byte_pointer;

void print_bits(unsigned long x);
void show_bytes(byte_pointer start, size_t len);
long fun_b(unsigned long x);

void show_long(unsigned long x) {
  show_bytes((byte_pointer) &x, sizeof(unsigned long));
}

int main() {
  unsigned long x = 100;
  show_long(x);
  print_bits(x);
  printf("\n");
  long x1 = fun_b(x);
  show_long(x1);
  print_bits(x1);
  return 0;
}
