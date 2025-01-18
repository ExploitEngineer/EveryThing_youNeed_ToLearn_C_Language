#include <stdio.h>

int main()
{
    int n;
    int i = 0;
    sacnf("%d", &n);
    do
    {
        printf("%dn", i);
        i++;
    } while (i <= n);
    return 0;
}
