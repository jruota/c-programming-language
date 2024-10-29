#include <stdio.h>

#define MAXHISTHEIGHT   80
#define MAXWORDLENGTH   25

int main(void)
{
    int c;
    int height;
    int i;
    int max_wl;
    int wl;
    int word_lengths[MAXWORDLENGTH + 1];

    i = 0;
    while (i <= MAXWORDLENGTH)
    {
        word_lengths[i] = 0;
        i++;
    }

    /* count word lengths */
    wl = 0;
    while ((c = getchar()) != EOF)
    {
        if ((c >= '\t' && c <= '\r') || c == ' ')
        {
            if (wl > 0)
            {
                if (wl > MAXWORDLENGTH)
                    ++word_lengths[0];
                else
                    ++word_lengths[wl];
            }
            wl = 0;
        }
        else
            ++wl;
    }

    /* find the longest word to scale the histogram */
    i = 2;
    max_wl = word_lengths[1];
    while (i < MAXWORDLENGTH)
    {
        if (word_lengths[i] > max_wl)
            max_wl = word_lengths[i];
        ++i;
    }

    /* print horizontal histogram */
    i = 1;
    while (i <= MAXWORDLENGTH)
    {
        printf("[%2d] ", i);
        height = (word_lengths[i] * MAXHISTHEIGHT) / max_wl;
        if (word_lengths[i] > 0 && height == 0)
            printf("+");
        else
        {
            while (height > 0)
            {
                printf("#");
                --height;
            }
        }
        printf("\n");
        ++i;
    }
    printf("Number of words longer than %d: %d\n",
        MAXWORDLENGTH, word_lengths[0]);

    return (0);
}