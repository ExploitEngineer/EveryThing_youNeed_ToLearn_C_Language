/* while.c */

#include <stdio.h>

int main(void)
{
    int x;
    x = 0;

    while(x == 0)
    {
        printf("Do you want to quit? Press 1\n");
        scanf("%d", &x);
    }
    return 0;
}
