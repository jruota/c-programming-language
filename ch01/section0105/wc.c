#include <stdio.h>

int main(void)
{
    int     c;
    int     in_word;
    long    lines;
    long    words;
    long    bytes;

    lines = 0;
    words = 0;
    bytes = 0;
    while ((c = getchar()) != EOF)
    {
        ++bytes;
        if (c == '\n')
        {
            ++lines;
            in_word = 0;
        }
        else if ((c >= '\t' && c <= '\r') || c == ' ')
            in_word = 0;
        else
        {
            if (!in_word)
                ++words;
            in_word = 1;
        }
    }
    printf("%ld %ld %ld\n", lines, words, bytes);
    return (0);
}