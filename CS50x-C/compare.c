#include <cs50.h>
#include <stdio.h>

int main(void) {
  int x = get_int("What's x ? ");
  int y = get_int("What's y ? ");

  if (x < y) {
    printf("x is less than y\n");
  }
}
