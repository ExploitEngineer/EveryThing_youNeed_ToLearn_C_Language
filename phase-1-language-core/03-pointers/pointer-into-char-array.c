/* pointer.c */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[32];
    char *p;

    strncpy(str, "I like apples", 31);
    p = str;

    printf("%c\n", *p);

    return 0;
}
