#include <stdio.h>
// Or operator
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n >= 1 || n <= 10)
    {
        printf("Yes!!");
    }
    else
    {
        printf("Oh no!!");
    }
    return 0;
}