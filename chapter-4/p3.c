#include <stdio.h>

int main()
{
    int n = 1, limit;
    printf("Enter a number: ");
    scanf("%d", &limit);
    while (n <= limit)
    {
        n++;
        if (n % 2 == 0)
        {
            continue;
        }
        printf("%d\n", n);
    }
    return 0;
}