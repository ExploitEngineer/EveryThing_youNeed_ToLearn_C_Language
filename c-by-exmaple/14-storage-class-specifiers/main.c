// Storage duration = when and where a variable exists in memory

// In C, a variable can exist:
int main()
{
    static int a;        // for the entire program
    auto int b;          // while a function is running
    register int c;      // store in CPU register for fast access
    extern int e;        // declared but defined elsewhere
    _Thread_local int d; // one per thread
    return 0;
}
