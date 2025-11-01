/* main.c */

#include <stdio.h>

int main(void)
{
    int v1 = 1;
    int v2 = 2;
    int checkpoint = 0;

    int *ptr = &v1;
    int **ptr_ptr = &ptr;
    checkpoint = **ptr_ptr;

    printf("First checkpoint %d\n", checkpoint);

    ptr = &v2;
    checkpoint = **ptr_ptr;

    printf("Second checkpoint %d\n", checkpoint);

    return 0;
}
