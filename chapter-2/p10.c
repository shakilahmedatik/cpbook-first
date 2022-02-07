#include <stdio.h>

int main()
{
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    char add = '+', sub = '-', mul = '*', div = '/';

    int numAdd = num1 + num2;
    int numSub = num1 - num2;
    int numMul = num1 * num2;
    int numDiv = num1 / num2;

    printf("%d %c %d = %d\n", num1, add, num2, numAdd);
    printf("%d %c %d = %d\n", num1, sub, num2, numSub);
    printf("%d %c %d = %d\n", num1, mul, num2, numMul);
    printf("%d %c %d = %d\n", num1, div, num2, numDiv);
    return 0;
}