#include <stdio.h>

int main(void)
{
    int x = 4;
    !x ? printf("x is 0") : x < 0 ? printf("x is negative\n")
                                  : printf("x is 0 or positive\n");
    return 0;
}
