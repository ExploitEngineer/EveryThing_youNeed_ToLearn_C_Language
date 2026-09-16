#include <stdio.h>

int main()
{
    int n = 0;

    (void)printf("Enter number: ");
    scanf("%d", &n);

    // If the number is zero, jump to
    // jump_here label
    if(n == 0)
        goto jump_here;

    // This will be skipped
    (void)printf("You entered: %d\n", n);

jump_here:
    (void)printf("Exiting the program.\n");
    return 0;
}
