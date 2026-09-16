// Perform integer addition or subtraction operations on pointers, taking the data type's size into account to return the correct address of the next item.

#include <stdio.h>

struct Person
{
    char name[64];
    int age;
};

int main(void)
{
    unsigned int x[5];
    unsigned int *x_ptr = &x[0];
    printf("Value of x_ptr = %p\n", (void *)x_ptr);
    printf("Value of x_ptr + 1 = %p\n", (void *)(x_ptr + 1));

    char y[5];
    char *y_ptr = &y[0];
    printf("Value of y_ptr = %p\n", (void *)y_ptr);
    printf("Value of y_ptr = %p\n", (void *)(y_ptr + 1));

    // ***********
    struct Person people[100];

    struct Person *p_Person = &people[0];

    int i = 0;
    for(i = 0; i < 100; i++)
    {
        p_Person->age = 0;
        p_Person += 4;
        p_Person->name[0] = 0;
    }
    return 0;
}
