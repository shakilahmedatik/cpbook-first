#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n > 0)
    {
        printf("%d is a positive number", n);
    }
    else if (n < 0)
    {
        printf("%d is a negative number", n);
    }
    else if (n == 0)
    {
        printf("%d is Zero.", n);
    }
    return 0;
}