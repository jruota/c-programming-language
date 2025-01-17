#include <stdio.h>

#define TABSTOP 4

void    print_tabs_spaces(int blanks, int pos);
int     next_tabstop(int pos);

int main(void)
{
    int c;
    int i;
    int spaces;
    int tabs_to_spaces;

    i = 0;
    spaces = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            if (spaces > 0)
            {
                print_tabs_spaces(spaces, i);
            }
            spaces = 0;
            putchar(c);
            i = 0;
        }
        else if (c == ' ')
        {
            ++spaces;
            ++i;
        }
        else if (c == '\t')
        {
            tabs_to_spaces = next_tabstop(i);
            spaces += tabs_to_spaces;
            i += tabs_to_spaces;
        }
        else
        {
            if (spaces > 0)
            {
                print_tabs_spaces(spaces, i);
            }
            spaces = 0;
            putchar(c);
            ++i;
        }
    }
    return (0);
}

void    print_tabs_spaces(int blanks, int pos)
{
    int start;
    int tabs;

    start = pos - blanks;
    while (blanks)
    {
        tabs = next_tabstop(start);
        if (tabs <= blanks)
        {
            while (tabs)
            {
                putchar('*');
                --tabs;
                --blanks;
                ++start;
            }
        }
        else
        {
            putchar('+');
            --blanks;
            ++start;
        }
    }
}

int next_tabstop(int pos)
{
    return (TABSTOP - (pos % TABSTOP));
}