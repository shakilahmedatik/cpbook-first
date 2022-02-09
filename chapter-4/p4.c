#include <stdio.h>

int main()
{
    int n = 1, limit;
    printf("Enter a number: ");
    scanf("%d", &limit);
    while (n <= 100)
    {
        printf("%d\n", n);
        n++;
    }
    return 0;
}