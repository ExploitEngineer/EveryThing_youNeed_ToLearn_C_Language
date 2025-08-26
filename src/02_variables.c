#include <stdio.h>
#include <stdbool.h>

int main()
{

    // variable = A reusable container for a value. Behaves as if it were the value it contains.

    // int = whoel number (4 bytes in modern systems)
    // float = single-precision decimal number (4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single charactr (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    int age = 25;
    int year = 2025;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d\n", quantity);

    // NOTE: C has a default behaviour of displaying 6 digits after the decimal when working with floating point numbers
    float gpa = 2.5;
    float price = 9.99;
    float temperature = -10.1;

    printf("Your gpa is %f\n", gpa);
    printf("The price is $%f\n", price);
    printf("The temperature is %fF\n", temperature);

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n", pi);
    printf("The value of e is %.15lf\n", e);

    char grade = 'F';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

    char name[] = "Abdul Rafay";
    char food[] = "Pizza";
    char email[] = "fake123@gmail.com";

    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("You email is %s\n", email);

    bool isOnline = true;
    bool isStudent = true;
    bool forSale = false;

    printf("%d\n", isOnline);
    if(isStudent)
    {
        printf("You are a student\n");
    }
    else
    {
        printf("You are not a student\n");
    }
    if(forSale)
    {
        printf("That item is for sale\n");
    }
    else
    {
        printf("That item is not for sale\n");
    }

    return 0;
}
