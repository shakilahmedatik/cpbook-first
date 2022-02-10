#include <stdio.h>

// Multiplication of all numbers between 1-20 using nested for loop

int main()
{
    int n, i;

    for (n = 1; n <= 20; n++)
    {
        for (i = 1; i <= 10; i++)
        {
            printf("%d * %d = %d\n", n, i, n * i);
        }
    }
    return 0;
}