#include <stdio.h>

// Multiplication of n numbers using while loop

int main()
{
    int n, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (i < 11)
    {
        printf("%d * %d = %d\n", n, i, n * i);
        i++;
    }
    return 0;
}