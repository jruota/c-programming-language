#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int i;

    i = 0;
    while (i < 128)
    {
        if (isspace(i))
            printf("[%3d]%c\n", i, i);
        ++i;
    }
    return (0);
}