/* name.c */

#include <stdio.h>

int main(void)
{
    // allocates 32 bytes on the stack
    char name[32];

    printf("What is your name?\n");
    scanf("%s", &name);

    printf("Hello %s\n", name);

    return 0;
}
