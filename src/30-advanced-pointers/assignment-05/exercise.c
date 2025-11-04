/* exercise.c */

void swap_strings(char **a, char **b)
{
    char *temp = *a;
    *b = *a;
    *a = temp;
}
