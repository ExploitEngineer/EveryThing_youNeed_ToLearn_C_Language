#include "stdlib.h"

#include "exercise.h"

void allocate_int(int **pointer_pointer, int value)
{
    int *memory = (int *)malloc(sizeof(int));
    *pointer_pointer = memory;
    *memory = value;
}
