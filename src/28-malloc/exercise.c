/* exercise.c */

#include <stdio.h>
#include <stdlib.h>

#include "exercise.h"

int *allocate_scalar_array(int size, int multiplier)
{
    int *result = malloc(size * sizeof(int));
    if(result == NULL)
    {
        return NULL;
    };

    for(int i = 0; i < size; i++)
    {
        result[i] = i * multiplier;
    }

    return result;
}
