#include <cs50.h>
#include <stdio.h>

int main(void) {
  int x = get_int("x: ");
  int y = get_int("y: ");

  printf("%.5f\n", (float)x / y);
}
