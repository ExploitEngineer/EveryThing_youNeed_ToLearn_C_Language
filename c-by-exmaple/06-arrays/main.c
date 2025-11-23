#include <stdio.h>

void print_array(int arr[], size_t len)
{
    printf("Printing array values...\n");
    for(size_t i = 0; i < len; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
}

int main(void)
{
    int my_array[5];
    unsigned int my_array_b[] = {0, 1, 2, 3, 4}; // You can init the array from it's elements. Size can be detected automatically here.

    size_t len = sizeof(my_array) / sizeof(my_array[0]);

    printf("The length of array is %zu\n", len);

    for(size_t i = 0; i < len; i++)
    {
        my_array[i] = 0;
    }

    printf("value at index 2 is %d\n", my_array[2]);

    print_array(my_array, len);

    return 0;
}
