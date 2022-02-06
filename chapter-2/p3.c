#include <stdio.h>

int main()
{
    int n;
    double x;
    x = 10.5;
    n = (int)x; // Type cast

    printf("Value of n is %d\n", n);  //%d for integer numbers.
    printf("Value of x is %lf\n", x); //%lf for real numbers (double).
    return 0;
}