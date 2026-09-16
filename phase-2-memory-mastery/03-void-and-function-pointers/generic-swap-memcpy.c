/* generic-swap-memcpy.c */

#include <stdlib.h>
#include <string.h>

// A type-agnostic swap: void* carries no type information, so the caller has to
// tell us how many bytes to move.
void swap(void *vp1, void *vp2, size_t size)
{
    void *temp = malloc(size);
    if(temp == NULL)
    {
        return;
    }

    // temp = a
    memcpy(temp, vp1, size);

    // a = b
    memcpy(vp1, vp2, size);

    // b = temp
    memcpy(vp2, temp, size);

    free(temp);
}
