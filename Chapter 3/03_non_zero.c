#include <stdio.h>

int main()
{
    if (1)
    {
        printf("This is is executed!\n");
    }
    if (2345)
    {
        printf("This if is also executed\n");
    }
    if (2.74)
    {
        printf("This is also executed\n");
    }
    if ('c')
    {
        printf("This character inside if is also executed\n");
    }
    if (0)
    {
        printf("It is not going to executed");
    }
    return 0;
}
