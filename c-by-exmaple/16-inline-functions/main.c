// An inline function is a function whose code is inserted directly at the place where it is called — so the program may not need to jump to another location in memory to execute it.

#include <stdio.h>

static inline void square(int *x)
{
    *x *= *x;
}

int main(void)
{
    int num = 5;
    square(&num);
    printf("%d\n", num);
    return 0;
}
