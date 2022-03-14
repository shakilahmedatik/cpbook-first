#include <stdio.h>
// Celsius to Fahrenheit calculation
int main()
{
    double c, f;
    printf("Enter the value of Celsius in Degree: ");
    scanf("%lf", &c);
    f = (c * 1.8) + 32;
    printf("Temperature in Fahrenheit is: %0.2lf degree.", f);

    return 0;
}