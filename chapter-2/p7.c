#include <stdio.h>

int main()
{
    char ch;
    printf("Enter the first letter of your name: ", ch);
    scanf("%c", &ch);

    printf("The first letter of your name is %c", ch);
    return 0;
}