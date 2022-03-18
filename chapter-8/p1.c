#include <stdio.h>
// Binary Search in C
int main()
{
    int arr[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;
    int mid_indx;
    int num;
    printf("Enter the number you'd like to find from the array: ");
    scanf("%d", &num);

    while (low_indx <= high_indx)
    {
        mid_indx = (low_indx + high_indx) / 2;
        if (num == arr[mid_indx])
        {
            break;
        }
        if (num < arr[mid_indx])
        {
            high_indx = mid_indx - 1;
        }
        else
        {
            low_indx = mid_indx + 1;
        }
    }
    if (low_indx > high_indx)
    {
        printf("%d is not in the array.", num);
    }
    else
    {
        printf("%d is found in the array. It's the %dth element of the array.", arr[mid_indx], mid_indx);
    }
    return 0;
}