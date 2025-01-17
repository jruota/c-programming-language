#include <stdio.h>

#define MAXLINE     80
#define TOLERANCE   20

int     ft_isspace(char c);
int     shift_buffer(char buffer[], int start, int lim);
void    clear_buffer(char buffer[], int lim);
void    print_line(char buffer[], int lim);

int main(void)
{
    char    buffer[MAXLINE + TOLERANCE];
    int     c;
    int     i;
    int     last_break;

    clear_buffer(buffer, MAXLINE + TOLERANCE);
    i = 0;
    while ((c = getchar()) != EOF && i < (MAXLINE + TOLERANCE - 1))
    {
        if (ft_isspace(c) || c == '\n')
            last_break = i;
        buffer[i] = c;
        ++i;
        if (i >= MAXLINE)
        {
            buffer[i] = '\0';
            buffer[last_break] = '\n';
            print_line(buffer, last_break);
            i = shift_buffer(buffer, last_break + 1, MAXLINE + TOLERANCE);
        }
    }
    buffer[i] = '\0';
    print_line(buffer, i);
    return (0);
}

int ft_isspace(char c)
{
    if ((c >= '\t' && c <= '\r') || c == ' ')
        return (1);
    return (0);
}

int shift_buffer(char buffer[], int start, int lim)
{
    char    temp[lim];
    int     i;

    clear_buffer(temp, lim);
    i = 0;
    while (i < (lim - 1) && (start + i) < lim && buffer[start + i])
    {
        temp[i] = buffer[start + i];
        ++i;
    }
    temp[i] = '\0';
    clear_buffer(buffer, lim);

    i = 0;
    while (i < (lim - 1) && temp[i])
    {
        buffer[i] = temp[i];
        ++i;
    }
    return (i);
}

void    clear_buffer(char buffer[], int lim)
{
    int i;

    i = 0;
    while (i < lim)
    {
        buffer[i] = '\0';
        ++i;
    }
    return ;
}

void    print_line(char buffer[], int lim)
{
    int i;

    i = 0;
    while (i <= lim && buffer[i])
    {
        putchar(buffer[i]);
        ++i;
    }
    return ;
}
