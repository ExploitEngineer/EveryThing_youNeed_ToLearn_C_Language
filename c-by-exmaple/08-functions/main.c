#include <stdio.h>

// Double the number passed in as 'x', returning the new value to the function caller.
int double_number_a(int x)
{
    return 2 * x;
}

// Double the number pointed to by 'x', storing the result in the original variable.
void double_number_b(int *x)
{
    // *x = *x * 2; both of these lines are the same
    *x *= 2;
}

int main(void)
{
    int num = 5;
    printf("%d\n", double_number_a(num));
    printf("%d\n", num);
    double_number_b(&num);
    printf("%d\n", num);
    return 0;
}
