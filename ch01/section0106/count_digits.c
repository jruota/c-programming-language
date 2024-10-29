#include <stdio.h>

/* count digits, white space, others */
int main(void)
{
    int c;
    int i;
    int nwhite;
    int nother;
    int ndigit[10];

    nwhite = 0;
    nother = 0;
    
    i = 0;
    while (i < 10)
    {
        ndigit[i] = 0;
        ++i;
    }
    
    while ((c = getchar()) != EOF)
    {
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\n' || c == '\t')
            ++nwhite;
        else
            ++nother;
    }

    printf("digits =");
    i = 0;
    while (i < 10)
    {
        printf(" %d", ndigit[i]);
        ++i;
    }
    printf(", white space = %d, other = %d\n", nwhite, nother);
    
    return (0);
}