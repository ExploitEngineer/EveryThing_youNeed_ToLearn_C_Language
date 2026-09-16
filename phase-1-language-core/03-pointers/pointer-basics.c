// A pointer is a variable that can hold the address of another variable. Just like regular data types, they must have their own type which refers to the type of the data at the address pointed to.

#include <stdio.h>

int main(void)
{
    int x = 4;
    int *pX = &x; // pointer to type int
    (void)printf("The value of x is %d\n", *pX);
    return 0;
}
