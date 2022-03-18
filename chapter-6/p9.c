// Result Calculator in c.
#include <stdio.h>
#define size 20
int main()
{
    int ft_marks[size] = {87, 45, 89, 90, 99, 34, 68, 97, 88, 79, 87, 45, 89, 90, 99, 34, 68, 34, 88, 79};
    int st_marks[size] = {66, 87, 70, 99, 98, 78, 56, 65, 43, 76, 87, 45, 89, 90, 99, 34, 68, 44, 88, 65};
    int final_marks[size] = {76, 98, 70, 79, 95, 78, 56, 45, 43, 76, 87, 33, 89, 90, 99, 87, 68, 97, 88, 45};
    double total_marks[size];
    for (int i = 0; i < size; i++)
    {
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }
    for (int i = 0; i < size; i++)
    {
        printf("Roll Number: %d Total Mark: %0.1lf\n", i + 1, total_marks[i]);
    }
    return 0;
}