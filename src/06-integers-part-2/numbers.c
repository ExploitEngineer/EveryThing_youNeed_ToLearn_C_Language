/* numbers.c */

#include <stdio.h>

int main(void)
{
    int x, y, answer;

    printf("Select a number\n");
    scanf("%d", &x);

    printf("Select another number\n");
    scanf("%d", &y);

    answer = x + y;
    printf("The answer  is %d\n", answer);
    return 0;
}
