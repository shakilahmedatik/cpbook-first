#include <stdio.h>

// Multiplication of n numbers using for loop [Using Addition technique]

int main()
{
    int n, i = 1, m = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (; i <= 10;)
    {
        m = m + n;
        printf("%d * %d = %d\n", n, i, m);
        i++;
    }
    return 0;
}