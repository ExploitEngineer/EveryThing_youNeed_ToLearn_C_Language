// Struct are user defined data storage objects containing public members by default.

#include <stdio.h>

struct my_struct
{
    int x;
    int y;
};

int main(void)
{
    struct my_struct object1;
    object1.x = 1;
    printf("%d\n", object1.x);
    return 0;
}
