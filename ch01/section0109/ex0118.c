#include <stdio.h>

#define MAXLINE 1024

int ft_getline(char s[], int lim);
int remove_trailing_bt(char s[], int lim);

int main(void)
{
    int     len;
    char    line[MAXLINE];

    while ((len = ft_getline(line, MAXLINE)) > 0)
    {
        len = remove_trailing_bt(line, MAXLINE);
        if (len > 1)
            printf("[%3d] %s", len, line);
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

int remove_trailing_bt(char s[], int lim)
{
    int i;

    i = 0;
    while (i < lim && s[i])
        ++i;
    if (i == 0)
        return (0);
    --i;
    if (s[i] == '\n')
        --i;
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    ++i;
    s[i] = '\n';
    ++i;
    s[i] = '\0';
    return (i);
}