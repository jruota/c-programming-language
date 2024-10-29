#include <stdio.h>

#define FIRST_PRINTABLE_CHAR    ' '
#define LAST_PRINTABLE_CHAR     '~'
#define MAX_HIST_HEIGHT         75

int main(void)
{
    int c;
    int i;

    int char_count[LAST_PRINTABLE_CHAR - FIRST_PRINTABLE_CHAR + 1];
    int height;
    int max_freq;

    i = 0;
    while (i < (LAST_PRINTABLE_CHAR - FIRST_PRINTABLE_CHAR + 1))
    {
        char_count[i] = 0;
        ++i;
    }

    while ((c = getchar()) != EOF)
    {
        if (c >= FIRST_PRINTABLE_CHAR && c <= LAST_PRINTABLE_CHAR)
            ++char_count[c - FIRST_PRINTABLE_CHAR];
    }

    /* find the character with the highest frequency */
    i = 1;
    max_freq = char_count[0];
    while (i < (LAST_PRINTABLE_CHAR - FIRST_PRINTABLE_CHAR + 1))
    {
        if (char_count[i] > max_freq)
            max_freq = char_count[i];
        ++i;
    }

    /* print a horizontal histogram */
    i = 0;
    while (i < (LAST_PRINTABLE_CHAR - FIRST_PRINTABLE_CHAR + 1))
    {
        printf("[%c] ", i + FIRST_PRINTABLE_CHAR);
        height = (char_count[i] * MAX_HIST_HEIGHT) / max_freq;
        if (char_count[i] > 0 && height == 0)
            printf("+");
        else
        {
            while (height)
            {
                printf("#");
                --height;
            }
        }
        printf("\n");
        ++i;
    }

    return (0);
}