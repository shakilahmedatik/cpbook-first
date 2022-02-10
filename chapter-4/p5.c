#include <stdio.h>

// Multiplication of n numbers using for loop

int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    return 0;
}