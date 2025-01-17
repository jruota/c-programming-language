#include <stdio.h>

#define MAXCOL  80          /* maximum column of input */
#define TABINC  4           /* tab increment size */

char line[MAXCOL];          /* input line */

int     exptab(int pos);
int     findblnk(int pos);
int     newpos(int pos);
void    printl(int pos);

/* fold long input line into two or more shorter lines */
int main(void)
{
    int c;
    int pos;

    pos = 0;                /* position in the line */
    while ((c = getchar()) != EOF)
    {
        line[pos] = c;      /* store current character */
        if (c == '\t')      /* expand tab character */
            pos = exptab(pos);
        else if (c == '\n')
        {
            printl(pos);    /* print current input line */
            pos = 0;
        }
        else if (++pos >= MAXCOL)
        {
            pos = findblnk(pos);
            printl(pos);
            pos = newpos(pos);
        }
    }
    return (0);
}

/* printl: print line until pos column */
void    printl(int pos)
{
    int i;

    for (i = 0; i < pos; ++i)
        putchar(line[i]);
    if (pos > 0)            /* any chars printed ? */
        putchar('\n');
    return ;
}

/* exptab: expand tab into blanks */
int exptab(int pos)
{
    line[pos] = ' ';        /* tab is at least one blank */
    for (++pos; pos < MAXCOL && pos % TABINC != 0; ++pos)
        line[pos] = ' ';
    if (pos < MAXCOL)       /* room left in current line */
        return pos;
    else                    /* current line is full */
    {
        printl(pos);
        return (0);         /* reset current position */
    }
}

/* findblnk: find blank's position */
int findblnk(int pos)
{
    while (pos > 0 && line[pos] != ' ')
        --pos;
    if (pos == 0)           /* no blanks in the line ? */
        return (MAXCOL);
    else
        return (pos + 1);
}

/* newpos: rearrange line with new position */
int newpos(int pos)
{
    int i;
    int j;

    if (pos <= 0 || pos >= MAXCOL)
        return (0);             /* nothing to rearrange */
    else
    {
        i = 0;
        for (j = pos; j < MAXCOL; ++j)
        {
            line[i] = line[j];
            ++i;
        }
        return (i);             /* new position in line */
    }
}