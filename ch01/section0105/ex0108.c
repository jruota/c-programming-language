#include <stdio.h>

int main(void)
{
    int c;
    int blanks;
    int tabs;
    int newlines;

    blanks = 0;
    tabs = 0;
    newlines = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
            ++blanks;
        if (c == '\t')
            ++tabs;
        if (c == '\n')
            ++newlines;
    }
    printf("There were %d blanks, %d tabs and %d newlines.\n",
        blanks, tabs, newlines);
    return (0);
}