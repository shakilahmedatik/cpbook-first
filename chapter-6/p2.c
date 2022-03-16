// Array in C language
#include <stdio.h>

int main()
{
    int arr[4] = {
        1,
        4,
        3,
        6,
    };
    arr[0] = 34;
    arr[1] = 43;

    printf("%d, %d %d", arr[0], arr[1], arr[3]);
    return 0;
}