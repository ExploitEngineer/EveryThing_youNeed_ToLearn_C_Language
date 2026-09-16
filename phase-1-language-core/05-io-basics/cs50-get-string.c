#include <cs50.h>
#include <stdio.h> // any file that ends with .h is header file

int main(void) {
  string answer = get_string("What is your name ? ");
  printf("hello, %s\n", answer);
}
