#include <stdio.h>
// Check if character is lowercase or highercase.
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("%c is lowercase.", ch);
    }
    else
    {
        printf("%c is uppercase", ch);
    }
    return 0;
}