#include <stdio.h>

int main()
{
    double a1, a2, b1, b2, c1, c2, x, y;

    // Get all the values
    printf("Enter the value of a1: ");
    scanf("%lf", &a1);
    printf("Enter the value of a2: ");
    scanf("%lf", &a2);
    printf("Enter the value of b1: ");
    scanf("%lf", &b1);
    printf("Enter the value of b2: ");
    scanf("%lf", &b2);
    printf("Enter the value of c1: ");
    scanf("%lf", &c1);
    printf("Enter the value of c2: ");
    scanf("%lf", &c2);

    // Calculate the value of X & Y
    x = (b2 * c1 - b1 * c2) / (a1 * b2 - a2 * b1);
    y = (a1 * c2 - a2 * c1) / (a1 * b2 - a2 * b1);

    // Display the value of x & y
    printf("The value of x is %0.2lf & y is %0.2lf", x, y);

    return 0;
}