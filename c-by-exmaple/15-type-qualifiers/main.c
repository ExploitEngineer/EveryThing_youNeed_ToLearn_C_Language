// A way of epressing additional information about a value through the type system to ensure correctness in the use of the data.

int main(void)
{
    restrict int *a; // Should only be accessed from this pointer
    const int b;     // Once defined, is constant and cannot be changed
    atomic int c;    // Can only be modified by one thread at a time
    volatile int d;  // Can be modified externally. the program will check x's value before using it, even if it hasn't been modified locally.
    return 0;
}
