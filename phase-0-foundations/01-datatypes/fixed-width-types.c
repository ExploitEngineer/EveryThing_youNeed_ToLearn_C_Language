#include <stdint.h> // <- needed for fixed width types
#include <stdio.h>

// By using this header file you can use the how many bits you want in signed or
// unsigned integer type

int main() {
  int8_t a = 100;         // 8-bit integer
  int16_t b = 30000;      // 16-bit integer
  int32_t c = 2000000;    // 32-bit integer
  int64_t d = 9000000000; // 64-bit integer

  uint8_t e = -100; // 8 bit unsigned integer

  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  printf("%lld\n", d); // use %lld for 64-bit
  printf("%d\n", e);
  return 0;
}
