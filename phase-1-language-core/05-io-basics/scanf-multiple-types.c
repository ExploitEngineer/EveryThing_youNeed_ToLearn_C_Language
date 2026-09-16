#include <stdio.h>
#include <string.h>

int main(void)
{
    int age = 0;
    float gpa = 0.0f;   // f makes it a float literal, not double
    char grade = '\0';  // \0 = null terminator (ASCII 0, empty char)
    char name[30] = ""; // [30] = array of 30 bytes for string input

    /*
    scanf:
    c% -> reads one char (including whitespaces like space, tab, newline)
    %s -> reads until whitespaces (sapce, tab, newline) is found
    stops reading at first whitespace
    can overflow if not careful

    Width limit -> scanf("%9s", str); prevents buffer overflow

    Why add space in " %c" ?
    - Without the space, scanf("%c") might read the leftover '\n'
      (newline from previous input) instead of waiting for a new char.
    - " %c" tells scanf to skip whitespace before reading the character.
    */

    printf("Enter your age: ");
    scanf("%d", &age); // & = address-of operator

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter you grade: ");
    scanf(" %c", &grade);

    // when you hit Enter, the newline (\n) is left in the input buffer.
    // Sometimes we need to consume it before the next input:
    getchar(); // consume the leftover '\n'

    printf("Enter your full name: ");

    /*
    fgets = file get string (variable-name, size, format)
    Safer than scanf("s") because it respects buffer size.
    Reads until newline or EOF, and keeps the newline '\n' in the buffer.
    */

    fgets(name, sizeof(name), stdin);

    /*
    Remove the newline added by fgets:
    - strlen(name) gives length including '\n' but not '\0'
    - safer way: strcspn(name, "\n") finds first '\n' and replaces with '\0'
    - full form of strcspn is (String Complement Span)
    */

    name[strlen(name) - 1] = '\0'; // <name-you-typed>\0 <- null terminator
    name[strcspn(name, "\n")] = '\0';

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    return 0;
}
