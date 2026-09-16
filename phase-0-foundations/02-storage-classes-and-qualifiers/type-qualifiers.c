// A way of expressing extra information about a value through the type system,
// so the compiler can enforce how the data is allowed to be used.

#include <stdio.h>

int shared_counter = 0;

int main(void)
{
    // restrict qualifies the POINTER, not the thing it points at, so it goes
    // after the *. It promises this is the only pointer used to reach the data.
    int  value = 1;
    int *restrict a = &value;

    // const must be initialised at its declaration - there is no later chance.
    const int b = 2;

    // _Atomic is the keyword; `atomic_int` is the <stdatomic.h> spelling of the
    // same thing. Only one thread at a time can modify it.
    _Atomic int c = 3;

    // volatile tells the compiler the value can change outside the program's
    // control, so it must re-read it from memory instead of caching it.
    volatile int d = 4;

    printf("restrict a -> %d\n", *a);
    printf("const    b  = %d\n", b);
    printf("_Atomic  c  = %d\n", c);
    printf("volatile d  = %d\n", d);

    return 0;
}
