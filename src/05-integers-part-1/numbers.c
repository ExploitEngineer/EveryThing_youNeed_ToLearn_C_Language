/* numbers.c */

#include <stdio.h>

/*

%s = a string of chars
%d integer
*/

int main(void)
{
    int x, y, result;
    // if you have the 64-bit cpu. you can basically handle 64 bit numbers
    // the integers have default to 32 bit
    // 0 -> 4.3 billlion

    printf("Please input a number:\n");
    scanf("%d", &x);

    printf("Please input another number:\n");
    scanf("%d", &y);

    result = x + y;
    printf("The result is %d\n", result);
    return 0;
}
