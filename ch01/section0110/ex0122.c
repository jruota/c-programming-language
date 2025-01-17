#include <stdio.h>

#define MAXLINE     80
#define TOLERANCE   20

int     copy_carryover(char line[], int start);
int     ft_isspace(char c);
void    print_line(char line[], int lim);

int main(void)
{
    char    buffer[MAXLINE + TOLERANCE];
    int     c;
    int     i;
    int     last_break;

    i = 0;
    while (i < MAXLINE + TOLERANCE)
    {
        buffer[i] = '\0';
        ++i;
    }
    i = 0;
    last_break = 0;
    while ((c = getchar()) != EOF && i < ((MAXLINE + TOLERANCE) - 1))
    {
        if (ft_isspace(c))
            last_break = i;
        buffer[i] = c;
        ++i;
        printf("\n---DEBUG: getchar '%s'---\n", buffer);
        if (i >= MAXLINE && last_break > 0)
        {
            buffer[i] = '\0';
            print_line(buffer, last_break);
            i = copy_carryover(buffer, last_break + 1);
            printf("\n---DEBUG: COPYING '%s'---\n", buffer);
        }
    }
    return (0);
}

int copy_carryover(char line[], int start)
{
    int i;

    i = 0;
    while (line[start + i])
    {
        line[i] = line[start + i];
        ++i;
    }
    line[i] = '\0';
    return (i);
}

void    print_line(char line[], int lim)
{
    int i;

    i = 0;
    while (i < lim)
    {
        putchar(line[i]);
        ++i;
    }
    putchar('\n');
    return ;
}

int ft_isspace(char c)
{
    if ((c >= '\t' && c <= '\r') || c == ' ')
        return (1);
    return (0);
}