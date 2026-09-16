// Use * before a variable name to use the value it points to rather than the address stored.

#include <stdio.h>

int main(void)
{
    int x = 4;
    int *pX = &x;
    printf("The value stored at x is %d\n", *pX);
    return 0;
}
