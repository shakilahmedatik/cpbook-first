// String length count using C Programming Language
#include <stdio.h>
int string_length(char str[])
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        ;
    return i;
}

int main()
{
    char country[100];
    int length;

    while (NULL != gets(country))
    {
        length = string_length(country);
        printf("%d\n", length);
    }
    return 0;
}