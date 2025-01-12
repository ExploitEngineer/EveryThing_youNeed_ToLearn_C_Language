#include <stdio.h>

int main()
{
    // int and int > int
    // int and float > float
    // float and float > float
    float a = 9.0;
    int b = 2;
    float c = a/b;
    int d = 6.7;
    printf("The value of a/b is %f\n", c);
    printf("The value of d is %d", d);
    return 0;
}
