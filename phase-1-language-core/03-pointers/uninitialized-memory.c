// An uninitialised local array holds whatever was already on the stack at that
// address. Reading it is undefined behaviour, and the values printed here are
// the point of the example: they are "garbage", and they change between runs,
// compilers and optimisation levels.

#include <stdio.h>

int main(void)
{
    int scores[1024];

    for(int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }

    return 0;
}
