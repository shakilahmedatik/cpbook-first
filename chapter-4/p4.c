#include <stdio.h>

// Multiplication of 5

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