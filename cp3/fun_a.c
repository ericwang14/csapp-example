long fun_a(unsigned x) {
  long val = 0;
  while (x) {
    val ^= x;
    x <<= 1;
  }
  return val & 0x1;
}
