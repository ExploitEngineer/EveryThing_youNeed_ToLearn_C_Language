#include <stdio.h>

int main (void)
{
    char *s = "HI!";
    printf ("%p\n", s);
    printf ("%p\n", &s[0]);
    printf ("%p\n", &s[1]);
    printf ("%p\n", &s[2]);
    printf ("%p\n", &s[3]);
    return 0;
}
