// Storage duration = when and where a variable exists in memory.

#include <stdio.h>

// Defined here so the block-scope `extern int e;` below has something to link to.
int e = 5;

int main(void)
{
    static int a = 1; // lives for the entire program, keeps its value between calls
    auto int b = 2;   // the default for locals: lives while the block is running
    register int c = 3;   // hint: keep it in a CPU register if possible
    extern int e;         // declared here, defined elsewhere (above, or another .c)
    static _Thread_local int d = 4; // one copy per thread; needs static at block scope

    printf("static        a = %d\n", a);
    printf("auto          b = %d\n", b);
    printf("register      c = %d\n", c);
    printf("extern        e = %d\n", e);
    printf("_Thread_local d = %d\n", d);

    return 0;
}
