/* while.c */

#include <stdio.h>

int main()
{
    int x;

    x = 0;
    while(x != 1)
    {

        printf("Do you wish to quit? Press 1.\n");
        scanf("%d", &x);
    }
    printf("Important!\n");

    return 0;
}
