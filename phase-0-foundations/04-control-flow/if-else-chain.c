#include <stdio.h>

int main(void)
{
    int x = 4;

    if(!x)
        printf("x is 0\n");
    else if(x < 0)
        printf("x is negative\n");
    else
    {
        printf("x is positive\n");
    }

    return 0;
}
