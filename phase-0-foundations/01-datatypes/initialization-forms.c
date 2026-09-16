int main(void)
{
    unsigned int a = 0;
    char greeting_a[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; // allocates 6 bytes on the stack
    char greeting_b[] = "Hello";
    char *greeting_c = "Hello";

    return 0;
}
