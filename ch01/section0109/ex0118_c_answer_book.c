#include    <stdio.h>

#define     MAXLINE     1000    /* maximum input line size */

int ft_getline(char line[], int maxline);
int ft_remove(char s[]);

/* remove trailing blanks and tabs, and delete blank lines */
int main(void)
{
    char    line[MAXLINE];  /* current input line */

    while (ft_getline(line, MAXLINE) > 0)
        if (ft_remove(line) > 0)
            printf("%s", line);
    return 0;
}

/* remove trailing blanks and tabs from character string s */
int ft_remove(char s[])
{
    int i;

    printf("---DEBUG: '%s'---\n", s);
    i = 0;
    while (s[i] != '\n')    /* find newline character */
        ++i;
    printf("---DEBUG: %d---\n", i);
    --i;                    /* back off from '\n' */
    printf("---DEBUG: %d---\n", i);
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
        --i;
    printf("---DEBUG: %d---\n", i);
    if (i >= 0)             /* is it a nonblank line? */
    {
        ++i;
        s[i] = '\n';        /* put newline character back */
        ++i;
        s[i] = '\0';        /* terminate the string */
    }
    return i;
}

/* getline: read a line into s, return length */
int ft_getline(char s[], int lim)
{
    int c;
    int i;
    int j;

    j = 0;
    for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i)
        if (i < (lim - 2))
        {
            s[j] = c;   /* line still in boundaries */
            ++j;
        }
    if (c == '\n')
    {
        s[j] = c;
        ++j;
        ++i;
    }
    s[j] = '\0';
    return i;
}