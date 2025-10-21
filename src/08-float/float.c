/* float.c */

#include <stdio.h>

int main(void)
{
    float pi, r, answer;

    printf("What is the R in cm?\n");
    scanf("%f", &r);

    /*
    %s - (text) string
    %d - integer (int)
    %f - float number
    */

    pi = 3.14;

    answer = r * r * pi;

    printf("The area is %f\n", answer);
    return 0;
}
