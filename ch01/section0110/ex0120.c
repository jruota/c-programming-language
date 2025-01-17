#include <stdio.h>

#define TABSTOP 4

int main(void)
{
    int c;
    int i;
    int spaces;

    i = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            putchar(c);
            i = 0;
        }
        else if (c == '\t')
        {
            /* logic for replacing tabs with spaces */
            spaces = TABSTOP - (i % TABSTOP);
            //printf("---DEBUG: i[%2d]\tspaces[%2d]---\n", i , spaces);
            while (spaces)
            {
                putchar('*');
                ++i;
                --spaces;
            }
        }
        else
        {
            putchar(c);
            ++i;
        }
    }
    return (0);
}