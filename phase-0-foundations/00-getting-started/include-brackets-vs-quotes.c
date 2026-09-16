// if you use these brackets then the compiler will look for a file in a centralized library.
#include <stdio.h>

// But if you use these quotes it will look for this file in your current directory the same directory in which you have this c file
// when you include your own stuff you use this
// #include "file.h"

int main(void)
{
    printf("Hello World\n");
    return 0; // exit code
}
