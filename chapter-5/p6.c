#include <stdio.h>

int main()
{
    double velocity, time, distance;
    printf("Enter velocity: ");
    scanf("%lf", &velocity);

    printf("Enter time: ");
    scanf("%lf", &time);

    distance = 2 * velocity * time;

    printf("Total distance is: %0.2lf$\n", distance);
    return 0;
}