#include <stdio.h>

/*
Signed types can represent both positive and negative numbers, while unsigned
types can only represent positive numbers and zero. For example, an unsigned
char holds values from 0 to 255, whereas a signed char holds values from -128 to
127.
*/

// c program to show integer overflow error
int signedIntergerOverflow(void) {
  int x = 2342343423;
  return x;
}

// But the same above program will run for unsigned int data type

int unsignedInteger(void) {
  unsigned int x = 2342343423;
  return x;
}

int main(void) {

  printf("signed integer overflow: %d", signedIntergerOverflow());
  printf("unsigned integer: %d", unsignedInteger());
  return 0;
}
