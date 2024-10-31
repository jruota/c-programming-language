/* 
 * This programs sole purpose is to print the line lengths of some input.
 * It is intended as a test for ex0116.c.
 */

#include <stdio.h>

int main(void)
{
    int c;
    int i;

    i = 0;
    while ((c = getchar()) != EOF)
    {
        ++i;
        if (c == '\n')
        {
            printf("[%4d]\n", i);
            i = 0;
        }
    }
    return (0);
}