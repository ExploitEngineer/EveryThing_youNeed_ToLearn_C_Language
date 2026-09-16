/* triangle.c */

#include <stdio.h>

int area_triangle(int base, int height);

int main(void)
{
    int base, height, area;

    printf("Base: ");
    fflush(stdout);
    scanf("%d", &base);

    printf("Height: ");
    fflush(stdout);
    scanf("%d", &height);

    area = area_triangle(base, height);
    printf("The area is %d\n", area);

    return 0;
}

int area_triangle(int base, int height)
{
    int area;

    area = (base * height) / 2;

    return area;
}
