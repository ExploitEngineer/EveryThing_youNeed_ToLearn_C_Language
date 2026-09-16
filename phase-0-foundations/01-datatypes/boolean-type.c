#include <stdbool.h> // <- this header file is necessary for using bool, true & false in your c program
#include <stdio.h>

// if you don't include this <stdbool.h> header file you only be able use _Bool
// not even true/false keywords

// if you are not including the header file of bool you can also do something
// like this
#define True 1
#define False 0

int main(void) {
  _Bool example = True;

  printf("without header file: %b", example);

  bool is_ready = true;
  bool not_ready = false;

  printf("%b:", is_ready);
  printf("%b:", not_ready);
  return 0;
}
