/* dynamic.c */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *name;

    name = malloc(32);

    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello %s\n", name);

    free(name);

    return 0;
}
