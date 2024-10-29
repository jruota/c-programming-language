#include <stdio.h>

/* ./a.out < invictus.txt */
int main(void)
{
    int c;

    while (c = getchar() != EOF)
    {
        printf("%d", c);
    }
    printf("%d\n", c);
    return (0);
}