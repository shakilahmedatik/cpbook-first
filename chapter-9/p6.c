// string conversion: Lower to Upper
#include <stdio.h>
#define length 10

int main()
{
    char country[] = {'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H', '\0'};
    int i;
    printf("%s\n", country);
    for (i = 0; i < length; i++)
    {
        if (country[i] >= 65 && country[i] <= 90)
        {
            country[i] = 'a' + (country[i] - 'A');
        }
    }
    printf("%s\n", country);
    return 0;
}