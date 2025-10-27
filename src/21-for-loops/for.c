/* for.c */

#include <stdio.h>
#include <assert.h>

#define F fflush(stdout)

void multi(int t, int v)
{
    int result;

    result = t * v;
    printf("%d X %d = %d\n", t, v, result);

    return;
}

int main(void)
{
    int x, table;

    printf("Select multiplication table: ");
    F;
    scanf("%d", &table);
    assert((table < 13) && (table > 0));

    for(x = 0; x < 13; x++)
    {
        multi(table, x);
    }

    return 0;
}
