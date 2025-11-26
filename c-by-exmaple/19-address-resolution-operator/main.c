#include <stdio.h>

int main(void)
{
    int x = 5;
    (void)printf("The address of x is %p\n", (void *)&x);
    return 0;
}
