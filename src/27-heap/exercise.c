#include <stdio.h>
#include <stdlib.h>
#include "exercise.h"

char *get_full_greeting(char *greeting, char *name, int size)
{
    char *full_greeting = malloc(size * sizeof(char));
    snprintf(full_greeting, size, "%s %s", greeting, name);
    return full_greeting;
}
