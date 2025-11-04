/* exercise.c */

#include <stdlib.h>
#include <string.h>

void swap(void *vp1, void *vp2, size_t size)
{
    void *temp = malloc(size);
    if(temp == NULL)
    {
        return;
    }

    // temp = a
    memcpy(temp, vp1, size);

    // b = a
    memcpy(vp2, vp1, size);

    // a = temp
    memcpy(vp1, temp, size);

    free(temp);
}
