/* swap-strings.c */

// Swapping two char* needs char** parameters: we have to change what the
// caller's pointers point at, not just our local copies of them.
void swap_strings(char **a, char **b)
{
    char *temp = *a;
    *a = *b;
    *b = temp;
}
