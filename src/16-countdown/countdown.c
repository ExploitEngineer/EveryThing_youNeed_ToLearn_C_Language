/* countdown.c */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
    int number;

    number = 6;
    while(1)
    {
        number -= 1;
        if(number == 3)
            continue;

        printf("%d\n", number);
        sleep(1);

        if(number < 1)
            break;
    }

    return 0;
}
