#include <stdio.h>

int main()
{
    int n, reminder;
    printf("Enter a number: ");
    scanf("%d", &n);
    reminder = n % 2;
    if (reminder == 0)
    {
        printf("%d is even number", n);
    }
    else
    {
        printf("%d is odd number", n);
    }
    return 0;
}