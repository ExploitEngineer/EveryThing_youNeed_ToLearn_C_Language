#include <stdio.h>

int main()
{

    /*
    Format specifier are Special tokens that begin with a % symbol,
    followed by a character that specifies the data type
    any optional modifiers (width, percision, flags).
    They control how data is displayed or interepted.

    In printf, the format specifier has this general form:
    % [flags] [width] [.precision] [length] type
    */

    // NOTE: 1. Common Format specifiers

    // INFO:  For Integers
    int age = 25;
    printf("%i === %d", age, age);
    /*
    In scanf, %i & %d behave slightly differently:
    Signed Integer (decimal)
    %d -> expects decimal only
    %i -> can read decimal, octal(0 prefix), or hex(0x prefix).
    */

    /*
     Signed Integer -> b7 default in c, int is signed can represent positive and negative numbers.
     Unsigned Interger -> can represent only non-negative numbers, but with a wider positive range
    */

    unsigned int u = 42;
    printf("unsinged %u\n", u); // prints unsigned

    printf("%o", age); // Octal (base 8)
    printf("%x", age); // hexadecimal (lowercase)
    printf("%X", age); // hexadecimal (uppercase)

    // INFO: For characters & strings
    char currency = '$';
    char name[] = "Abdul Rafay";

    printf("%c", currency); // single character
    printf("%s", name);     // string (char array, ending with '/0')

    // If you use %s, C will keep reading until it finds '\0'

    // INFO: For floating-point numbers
    float price = 19.99;

    printf("%f\n", price); // decimal notation (fixed point)
    printf("%e\n", price); // scientific notation (lowercase) = 3.141593e+00
    printf("%E\n", price); // scientific notation (uppercase) = 3.141593E+00
    printf("%g", price);   // shorter of %f and %e = 3.14159
    printf("%G", price);   // shorter for %f and #E = 3.14159

    // INFO: For pointers & misc
    int x = 10;
    int *p = &x;

    printf("%p", p); // pointer (memory address) 0x7fff638f0f54
    printf("%%");    // literal percent sign %

    // NOTE: 2. Modifiers (to control size & width)

    // INFO: width and precision
    /*
    %5d -> Integer takes at least 5 spaces (right-aligned)
    %05d -> pads with leading zeros
    %.2f -> floating-point with 2 decimal palces
    %10.3f -> at least 10 spaces wide, 3 decimals
    */
    float PI = 3.14159;
    printf("%10.3f\n", PI);

    double pi = 3.141592653589793;
    printf("%.10f\n", pi); // 10 digits after decimal

    // INFO: Length modifiers
    short s = 10;
    long l = 2343;
    long long ll = 23423432432;
    long double ld = 3423423.23432323423;

    printf("%hd", s);   // %hd (short int), %hu (unsigned short)
    printf("%ld", l);   // %ld (long int), %lu (unsigned long)
    printf("%lld", ll); // %lld (long long int)
    printf("%Lf", ld);  // %Lf (long double)

    // INFO: Flags (+, -, space, 0, #)
    int n = 42;
    printf("%+d\n", n);  // +42
    printf("% d\n", n);  //  42 (with leading space)
    printf("%05d\n", n); // 00042
    printf("%#x\n", n);  // 0x2a
    printf("%#o\n", n);  // 052

    return 0;
}
