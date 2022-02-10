#include <stdio.h>

// Multiplication of all numbers between 1-20 using nested for loop

int main()
{
    int n, m, i, j;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("\nEnter the value of m: ");
        scanf("%d", &m);
        for (j = 10; j <= m; j++)
        {
            if (j % 11 == 0)
            {
                continue;
            }
            printf("%d\n", j);
        }
    }
    return 0;
}