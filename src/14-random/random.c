/* random.c */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int our_random_function(int max)
{
    int x;

    x = rand() % max + 1;
    /*
    why +1 ? cause max works with rand like this

    max = 10
    0 1 2 3 4 5 6 7 8 9
      */
    return x;
}

int main(void)
{
    int random;

    srand(getpid());

    random = our_random_function(5);
    printf("%d\n", random);

    random = our_random_function(10);
    printf("%d\n", random);

    return 0;
}
