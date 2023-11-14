#include <stdio.h>

#define UPPER 300
#define LOWER 0
#define STEP 20

/* print Fahrenheit-Celcius table
for fahr = 0, 20, ..., 300 */
float convert(float fahr);

int main(void) 
{
    int fahr;
    for (fahr = UPPER; fahr >= LOWER; fahr -= STEP) {
        printf("%3d %6.2f\n", fahr, convert(fahr));
    }
}

float convert(float fahr)
{
    return (5.0/9.0) * (fahr-32);
}