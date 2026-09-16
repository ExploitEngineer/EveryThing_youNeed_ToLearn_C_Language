/* ampersand.c */

#include <stdio.h>

void addition(int a, int b, int *target)
{
    *target = a + b;

    return;
}

int main(void)
{
    int x, y, answer;

    x = 5;
    y = 15;

    addition(x, y, &answer);
    printf("%d\n", answer);

    return 0;
}
