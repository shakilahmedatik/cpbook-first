// Garbage example in C
#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    printf("%d\n", arr[-1]);
    printf("%d\n", arr[44]);
    printf("%d\n", arr[98]);
    return 0;
}