#include <stdio.h>

int main(void)
{
    int c;
    int prev_space;

    prev_space = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c >= '\t' && c <= '\r') || c == ' ')
        {
            if (!prev_space)
            {
                putchar(' ');
                prev_space = 1;
            }
        }
        else
        {
            putchar(c);
            prev_space = 0;
        }
    }
    return (0);
}

/* ########################################################################## */

/* #include <ctype.h>

int main(void)
{
    int i;

    i = 0;
    while (i < 128)
    {
        printf("%c[%d]\t->\t%d\n", i, i, isspace(i));
        ++i;
    }
    return (0);
} */