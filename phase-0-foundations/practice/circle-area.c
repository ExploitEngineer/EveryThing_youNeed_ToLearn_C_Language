/* float.c */

#include <stdio.h>

// %f - float (number) numbers

int main(void)
{
    // area
    // radius * radius * PI
    float radius, pi, area;

    pi = 3.14;
    printf("What is radius in cm?\n");
    scanf("%f", &radius);

    area = radius * radius * pi;

    printf("The area of the circle is %f cm\n", area);

    return 0;
}
