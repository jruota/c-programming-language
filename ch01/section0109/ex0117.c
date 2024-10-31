#include <stdio.h>

#define MAXLINE 1024

int ft_getline(char s[], int lim);

int main(void)
{
    int     len;
    char    line[MAXLINE];

    while ((len = ft_getline(line, MAXLINE)) > 0)
    {
        if (len > 80)
            printf("[%4d] %s", len, line);
    }
    return (0);
}

int ft_getline(char s[], int lim)
{
    int c;
    int i;
    int j;

    i = 0;
    while (i < (lim - 2) && (c = getchar()) != EOF)
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