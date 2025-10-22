/* if.c */

#include <stdio.h>

int main(void)
{
    /*
      int x;

      x = 4;

      if(x == 5)
      {
          printf("It is five!\n");
      }

    */

    int velocity, safespeed;

    safespeed = 80;

    printf("How fast are you diving in km/h?\n");
    scanf("%d", &velocity);

    if(velocity > 100)
    {
        printf("You are driving too fast!\n");
    }
    else if(velocity > safespeed)
    {
        printf("You are driving safely\n");
    }
    else
    {
        printf("OK\n");
    }

    return 0;
}
