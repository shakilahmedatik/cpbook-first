#include <stdio.h>
int main()
{
    double x, y, x_plus_y, x_minus_y;

    // Get the value of x+y
    printf("Enter the value of x + y: ");
    scanf("%lf", &x_plus_y);

    // Get the value of x-y
    printf("Enter the value of x - y: ");
    scanf("%lf", &x_minus_y);

    // Calculate the value of X & Y
    x = (x_plus_y + x_minus_y) / 2;
    y = (x_plus_y - x_minus_y) / 2;

    // Display the value of x & y
    printf("The value of x is %0.2lf & y is %0.2lf", x, y);

    return 0;
}