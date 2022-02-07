#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 30)
    {
        printf("%d is less than 30", n);
    }
    else if (n < 50)
    {
        printf("%d is less than 50", n);
    }
    else
    {
        printf("I have no idea about %d.", n);
    }
    return 0;
}