#include <stdio.h>

int main()
{
    int last_number, sum_of_all_numbers;
    printf("Enter the last number: ");
    scanf("%d", &last_number);

    sum_of_all_numbers = last_number + (last_number + 1) / 2;

    printf("Sum of all the numbers from 1 to %d is %d$\n", last_number, sum_of_all_numbers);
    return 0;
}