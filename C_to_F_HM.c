#include <stdio.h>


/* print Fahrenheit-celsius table for f = 0, 20, ..., 300 */
main()
{
    int step;
    float fahr, celsius, lower, upper;
    lower = -17.8;  /* lower limit of temperature table */
    upper = 140.9; /* upper limit */
    step = 5; /* step size */
    celsius = lower;
    printf("Temperature Table\n");
    while (celsius <= upper) {
        fahr = 1.8 * celsius + 32.0;
                printf("%4.0f %6.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
    getchar();
}
