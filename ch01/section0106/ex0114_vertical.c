#include <stdio.h>

#define FIRST_PRINTABLE_CHAR    ' '
#define LAST_PRINTABLE_CHAR     '~'
#define MAX_HIST_HEIGHT         40

int main(void)
{
    int c;
    int i;
    int j;

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

    /* print a vertical histogram */
    i = 0;
    while (i < MAX_HIST_HEIGHT)
    {
        j = 0;
        while (j < (LAST_PRINTABLE_CHAR - FIRST_PRINTABLE_CHAR + 1))
        {
            height = (char_count[j] * MAX_HIST_HEIGHT) / max_freq;
            if (i == (MAX_HIST_HEIGHT - 1) && height == 0 && char_count[j] > 0)
                printf(" + ");
            else if (height >= (MAX_HIST_HEIGHT - i))
                printf(" # ");
            else
                printf("   ");
            ++j;
        }
        printf("\n");
        ++i;
    }

    j = 0;
    while (j < (LAST_PRINTABLE_CHAR - FIRST_PRINTABLE_CHAR + 1))
    {
        printf("[%c]", j + FIRST_PRINTABLE_CHAR);
        ++j;
    }
    printf("\n");

    return (0);
}