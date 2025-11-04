/* exercise.c */

#include "exercise.h"

void snek_zero_out(void *ptr, snek_object_kind_t kind)
{
    if(kind == INTEGER)
    {
        snek_int_t *obj = (snek_int_t *)ptr;
        obj->value = 0;
    }
    else if(kind == FLOAT)
    {
        snek_float_t *obj = (snek_float_t *)ptr;
        obj->value = 0;
    }
    else if(kind == BOOL)
    {
        snek_bool_t *obj = (snek_bool_t *)ptr;
        obj->value = 0;
    } // else do some stuff here...
}
