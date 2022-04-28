// Binary Search in C using functions.

#include <stdio.h>

// Function Prototype
int b_search(int arr[], int low, int high, int key);

// Starting Point
int main()
{
    int arr[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};

    int num;
    printf("Enter the number you'd like to find from the array: ");
    scanf("%d", &num);
    b_search(arr, 0, 15, num);

    return 0;
}

int b_search(int arr[], int low, int high, int key)
{
    int mid_indx;
    while (low <= high)
    {
        mid_indx = (low + high) / 2;
        if (key == arr[mid_indx])
        {
            break;
        }
        if (key < arr[mid_indx])
        {
            high = mid_indx - 1;
        }
        else
        {
            low = mid_indx + 1;
        }
    }
    if (low > high)
    {
        printf("%d is not in the array.", key);
    }
    else
    {
        printf("%d is found in the array. It's the %dth element of the array.", arr[mid_indx], mid_indx);
    }
    return 0;
}









