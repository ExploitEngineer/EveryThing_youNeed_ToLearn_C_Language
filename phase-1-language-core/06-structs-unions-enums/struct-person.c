/* struct.c */

#include <stdio.h>
#include <string.h>

struct person
{
    char title[9];
    char lastname[32];
    int age;
};

int main(void)
{
    struct person abdul;

    strncpy(abdul.title, "engineer", 9);
    strncpy(abdul.lastname, "rafay", 31);
    abdul.age = 18;

    printf("%s %s of the age %d\n", abdul.title, abdul.lastname, abdul.age);

    return 0;
}
