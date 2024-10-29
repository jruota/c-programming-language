#include <stdio.h>

/* 
 * Run as './a.out < input_backup.txt > input_new.txt'
 * This is a very simple, hardcoded find and replace, it does not deal with
 * user input. 
 */

int main(void)
{
    int c;

    while ((c = getchar()) != EOF)
    {
        if (c == '\\' && (c = getchar()) != EOF && c == 't')
            putchar('\t');
        else
            putchar(c);
    }

    return (0);
}