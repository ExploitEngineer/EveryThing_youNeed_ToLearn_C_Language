/* exercise.c */

#include <stdlib.h>
#include "exercise.h"

int *allocate_scalar_list(int size, int multiplier)
{
    int *lst = (int *)malloc(size * sizeof(int));
    if(lst == NULL)
    {
        return NULL;
    }
    for(int i = 0; i < size; i++)
    {
        lst[i] = i * multiplier;
    }
    return lst;
}
