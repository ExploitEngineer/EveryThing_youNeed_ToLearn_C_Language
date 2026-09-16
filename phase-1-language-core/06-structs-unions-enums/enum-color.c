/* enums.c */

/*
NOTE: Assignment
The Sneklang graphics library needs to represents colors.

Create a Color enum (and the color_t typedef) with RED, GREEN, and BLUE values, in that order.
*/

#include <stdio.h>

#include "enum-color.h"

int main(void)
{
    color_t new_color = RED;
    printf("new_color = %d\n", new_color);

    return 0;
}
