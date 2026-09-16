/* triangle-area.c */

#include <stdio.h>

int main(void)
{
    float base, height, area;

    printf("Enter the base of the triangle: ");
    scanf("%f", &base);

    printf("Enter the height of the triangle: ");
    scanf("%f", &height);

    area = (base * height) / 2;
    printf("The area of the triangle is: %f\n", area);
    return 0;
}
