// Any operand whose type ranks lower than int is temporarily promoted to int or unsigned int for comparison.

#include <stdio.h>

int main(void)
{
    char x = 'A';
    if(x == 'a')
        printf("Less than\n");
    else
        printf("Greater than or equal to\n");
    return 0;
}
