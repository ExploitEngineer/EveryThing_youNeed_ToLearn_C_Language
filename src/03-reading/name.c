/* name.c */

#include <stdio.h>

int main(void)
{
    // allocates 16 bytes on the stack
    char name[16];

    printf("Hello, what is your name?\n");
    scanf("%s", name);

    printf("Hello %s \n", name);

    return 0;
}
