#include <stdio.h>

int main()
{
    int age = 15;
    if (age > 10)
    {
        printf("Your age is greater than 5\n");
        printf("We are inside if\n");
    }
    if (age % 5 == 0)
    {
        printf("Your age is divisible by 5");
    }
    return 0;
}
