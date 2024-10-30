#include <stdio.h>

float   celsius_to_fahr(float celsius);

/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
int main(void)
{
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
        printf("%3.0f\t%6.1f\n", celsius, celsius_to_fahr(celsius));
        celsius = celsius + step;
    }
    return (0);
}

float   celsius_to_fahr(float celsius)
{
    return ((celsius  * (9.0 / 5.0)) + 32.0);
}