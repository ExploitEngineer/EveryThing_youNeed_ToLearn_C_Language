/* switch.c */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int x;

    printf("Choose between 1. apples, 2. pears or 3. bananas\n");
    scanf("%d", &x);

    printf("Processing...\n");
    sleep(2);

    switch(x)
    {
    case 1: /* apples */
        printf("Apples\n");
        break;

    case 2: /* pears */
        printf("Pears\n");
        break;

    case 3: /* bananas */
        printf("Bananas\n");
        break;

    default:
        printf("Something else\n");
    }

    return 0;
}
