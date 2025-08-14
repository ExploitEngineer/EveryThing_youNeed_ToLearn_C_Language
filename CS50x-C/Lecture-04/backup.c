// & operator (Address of operator) - returns the memory address of a variable.
// * operator (Dereference) - Accesses (reads/write) the value stored at a memory address.
// %p for pointers

#include <stdio.h>

int main (void)
{
    int  n = 50;
    int *p = &n;         // type of pointer *
    printf ("%i\n", *p); // dereference *
    printf ("%p\n", &n);
    printf ("%p\n", &p);
    return 0;
}
