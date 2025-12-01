// A union is a special data type that can store different data types at the same memory location. You can define a union with many members. but only one member can contain a value at any given time. Unions provide an efficient way of using the same memory location for multiple purposes. A union's size will be the size of the largest constituent type.

#include <stdio.h>

union my_data
{
    int i;
    float f;
    char str[20];
};

int main(void)
{
    union my_data object1;
    printf("Size of my_data union: %lu\n", sizeof(object1));
    return 0;
}
