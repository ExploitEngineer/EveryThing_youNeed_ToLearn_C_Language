#include <stdio.h>

void print_col(int n);

int main(void) {
  for (int i = 0; i < 4; i++) {
    printf("?");
  }
  printf("\n");

  print_col(4);

  for (int row = 0; row < 3; row++) {
    for (int col = 0; col < 3; col++) {
      printf("#");
    }
    printf("\n");
  }

  const int constant = 10;
  printf("This constant will not change %i\n", constant);
}

void print_col(int n) {
  for (int i = 0; i < n; i++) {
    printf("#\n");
  }
}
