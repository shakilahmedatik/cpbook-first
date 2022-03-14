#include <stdio.h>
// Fahrenheit to Celsius calculation
int main()
{
    double c, f;
    printf("Enter the value of Fahrenheit in Degree: ");
    scanf("%lf", &f);
    c = (f - 32) / 1.8;
    printf("Temperature in Celsius is: %0.2lf degree.", c);

    return 0;
}