#include <stdio.h>

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main(void)
{
    float   fahr;
    float   celsius;
    int     lower;
    int     upper;
    int     step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Temperature table\n");
    printf("%-3s\t%-6s\n", "°C", "°F");
    celsius = lower;
    while (celsius <= upper)
    {
        // celsius = (5.0 / 9.0) * (fahr - 32.0);
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%3.0f\t%6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    return (0);
}