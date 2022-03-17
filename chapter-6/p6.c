// print all element of an in reverse order array using loop in C
#include <stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}