#include <stdio.h>

#define MAXLINE 10    /* maximum input line size */

int ft_getline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main(void)
{
    int     len;                /* current line length */
    int     max;                /* maximum length seen so far */
    char    line[MAXLINE];      /* current input line */
    char    longest[MAXLINE];   /* longest line saved here */

    max = 0;
    while ((len = ft_getline(line, MAXLINE)) > 0)
    {
        printf("[%4d] %s", len, line);
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }
    if (max > 0)    /* there was a line */
        printf("%s", longest);
    return (0);
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

/* copy: copy 'from' into 'to'; assume 'to' is big enough */
void    copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
    return ;
}