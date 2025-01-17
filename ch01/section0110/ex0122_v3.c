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
    last_break = 0;
    while ((c = getchar()) != EOF && i < (MAXLINE + TOLERANCE - 2))
    {
        buffer[i] = c;
        if (ft_isspace(c) && i <= MAXLINE)
            last_break = i;
        if (c == '\n')
        {
            c = getchar();
            if (c == EOF)
                break;
            if (c != '\n')
            {
                buffer[i] = ' ';
                last_break = i;
                ++i;
                buffer[i] = c;
                ++i;
            }
            else if (c == '\n')
            {
                buffer[i] = '\0';
                print_line(buffer, i);
                i = shift_buffer(buffer, last_break + 1, MAXLINE + TOLERANCE);
                last_break = 0;
                putchar('\n');
                putchar('\n');
            }
        }
        else
            ++i;
        if (i >= MAXLINE)
        {
            if (last_break != 0)
            {
                buffer[i] = '\0';
                buffer[last_break] = '\n';
                print_line(buffer, last_break);
                i = shift_buffer(buffer, last_break + 1, MAXLINE + TOLERANCE);
                last_break = 0;
            }
            else
            {
                //printf("---DEBUG: last_break -> %d ---\n", last_break);
                buffer[i] = '\0';
                print_line(buffer, MAXLINE - 5);
                putchar('-');
                putchar('L');
                putchar('B');
                putchar('-');
                putchar('\n');
                i = shift_buffer(buffer, MAXLINE - 4, MAXLINE + TOLERANCE);
                last_break = 0;
            }
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
