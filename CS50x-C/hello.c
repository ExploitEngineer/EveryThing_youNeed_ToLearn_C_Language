#include <stdio.h> // any file that ends with .h is header file
#include <cs50.h>

int main(void)
{
    string answer = get_string("What is your name ? ");
    printf("hello, %s\n", answer);
}
