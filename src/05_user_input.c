#include <stdio.h>
#include <string.h>

int main(void)
{
    int age = 0;
    float gpa = 0.0f;   // f if it's a float
    char grade = '\0';  // \0 = null terminator
    char name[30] = ""; // [30] = 30 bytes

    printf("Enter your age: ");
    scanf("%d", &age); // & = address-of operator

    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    printf("Enter you grade: ");
    scanf(" %c", &grade);

    getchar(); // clear the new-line character within the input buffer
    // scanf can't read any whitespaces
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin); // fgets = file get string (variable-name, size, format)
    name[strlen(name) - 1] = '\0';    // <name-you-typed>\0 <- null terminator

    printf("%s\n", name);
    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    return 0;
}
