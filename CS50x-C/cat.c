#include <cs50.h>
#include <stdio.h>

int get_positive_int(void);
void meow(int n);

int main(void) {
  int times = get_positive_int();
  meow(times);
}

int get_positive_int(void) {
  int n;
  do {
    n = get_int("Number: ");
  } while (n < 1);
  return n;
}

void meow(int n) {

  for (int i = 0; i < n; i++) {
    printf("meow\n");
  }
}
