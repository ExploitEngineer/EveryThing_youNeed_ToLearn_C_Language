/* main.c */

#include <stdio.h>
#include "exercise.h"

int main()
{
    printMessageOne();
    printMessageTwo();
    printMessageThree();
    return 0;
}

void printMessageOne()
{
    const char *message = "Dark mode?\n";
    printStackPointerDiff();
    printf("%s\n", message);
}

void printMessageTwo()
{
    const char *message = "More like...\n";
    printStackPointerDiff();
    printf("%s\n", message);
}

void printMessageThree()
{
    const char *message = "dark roast.\n";
    printStackPointerDiff();
    printf("%s\n", message);
}

// don't touch below this line

void printStackPointerDiff()
{
    static void *last_sp = NULL;
    void *current_sp;
    current_sp = __builtin_frame_address(0);
    long diff = (char *)last_sp - (char *)current_sp;
    if(last_sp == NULL)
    {
        last_sp = current_sp;
        diff = 0;
    }
    printf("---------------------------------\n");
    printf("Stack pointer offset: %ld bytes\n", diff);
    printf("---------------------------------\n");
}
