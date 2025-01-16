#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value of i is %d\n", i);

    i = i + 5; // 10
    printf("The value of i is %d\n", i);
    i++; // 11 | & what if i can do this like that
    ++i; // how are these different i++ & ++i;
    printf("The value of i is %d\n", i);
    return 0;
}


// i++ prints i first and then increments i (post increment operator)
// ++i increments i first and then prints i (post increment operator)
