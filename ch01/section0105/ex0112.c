#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if ((c >= '\t' && c <= '\r') || c == ' ' || c == '\n')
            putchar('\n');
        else
            putchar(c);
    }
    return (0);
}