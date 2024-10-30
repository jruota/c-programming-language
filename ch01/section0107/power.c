#include <stdio.h>

int power(int m, int n);

/* test power function */
int main(void)
{
    int i;

    i = 0;
    while (i < 10)
    {
        printf("%2d %4d %8d\n", i, power(2, i), power(-3, i));
        ++i;
    }
    return (0);
}

/* power:   raise base to n-th power; n >= 0 */
int power(int base, int n)
{
    int i;
    int p;

    i = 1;
    p = 1;
    while (i <= n)
    {
        p = p * base;
        ++i;
    }
    return (p);
}