#include <stdio.h>

#define MAXLINE 1000

int     ft_getline(char s[], int lim);
void    reverse(char s[]);

int main(void)
{
    char    line[MAXLINE];

    while (ft_getline(line, MAXLINE) > 0)
    {
        reverse(line);
        printf("%s", line);
    }
    return (0);
}

void    reverse(char s[])
{
    int     i;
    int     j;
    char    temp;

    i = 0;
    while (s[i])
        ++i;
    if (i == 0)
        return;
    --i;
    if (s[i] == '\n')
        --i;
    j = 0;
    while (j < i)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
    return ;
}

/* getline: read a line into s, return length */
int ft_getline(char s[], int lim)
{
    int c;
    int i;
    int j;

    i = 0;
    while (i < lim - 2 && (c = getchar()) != EOF)
    {
        s[i] = c;
        ++i;
        if (c == '\n')
        {
            s[i] = '\0';
            return (i);
        }
    }
    j = i;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
    while ((c = getchar()) != EOF)
    {
        ++j;
        if (c == '\n')
            break ;
    }
    return (j);
}