// Create a function with an arbitrary argument count for more flexibility.

#include <stdio.h>
#include <stdarg.h>

int sum(int count, ...)
{
    int total, i, temp;
    total = 0;
    va_list args;
    va_start(args, count);
    for(int i = 0; i < count; i++)
    {
        temp = va_arg(args, int);
        total += temp;
    }
    va_end(args);
    return total;
}

int main(void)
{
    int numbers[3] = {[0] = 5, [1] = 10, [2] = 15};
    int sum_of_numbers = sum(3, numbers[0], numbers[1], numbers[2]);
    printf("Sum of array: %d\n", sum_of_numbers);
    return 0;
}
