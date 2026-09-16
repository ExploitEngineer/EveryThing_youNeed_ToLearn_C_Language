#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    // Without this check, argv[1] and argv[2] are read past the end of argv
    // whenever the program is run with no arguments.
    if(argc != 3)
    {
        fprintf(stderr, "usage: %s SOURCE DEST\n", argv[0]);
        return 1;
    }

    FILE *src = fopen(argv[1], "rb");
    if(src == NULL)
    {
        fprintf(stderr, "could not open %s\n", argv[1]);
        return 1;
    }

    FILE *dst = fopen(argv[2], "wb");
    if(dst == NULL)
    {
        fprintf(stderr, "could not open %s\n", argv[2]);
        fclose(src);
        return 1;
    }

    BYTE b;

    while(fread(&b, sizeof(b), 1, src) != 0)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    fclose(dst);
    fclose(src);
    return 0;
}
