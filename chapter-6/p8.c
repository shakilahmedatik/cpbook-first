// Reverse all the element of an array using temp in c
#include <stdio.h>
#define n 10
int main()
{
    int arr[n] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 95};

    int i, j, temp;
    for (i = 0, j = 9; i < n / 2; i++, j--)
    {
        temp = arr[j];
        arr[j] = arr[i];
        arr[i] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}