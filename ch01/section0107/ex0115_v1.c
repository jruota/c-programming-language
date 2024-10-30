#include <stdio.h>

float   fahr_to_celsius(float fahr);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main(void)
{
    float   fahr;
    int     lower;
    int     upper;
    int     step;

    lower = 0;      /* lower limit of temperature table */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    printf("Temperature table\n");
    printf("%-3s\t%-6s\n", "°F", "°C");
    fahr = lower;
    while (fahr <= upper)
    {
        printf("%3.0f\t%6.1f\n", fahr, fahr_to_celsius(fahr));
        fahr = fahr + step;
    }
    return (0);
}

float   fahr_to_celsius(float fahr)
{
    return (5.0 / 9.0) * (fahr - 32.0);
}