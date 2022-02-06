#include <stdio.h>

int main()
{
    int a;

    a = 1000;
    printf("Value of a is %d\n", a);

    a = -21000;
    printf("Value of a is %d\n", a);

    a = 10000000;
    printf("Value of a is %d\n", a);

    a = -10000000;
    printf("Value of a is %d\n", a);

    // int limit is -2147483648 to 2147483648.
    // int type takes 4 byte space in memory. (1byte = 8bit)
    // We can store up to 2 number(0 & 1) in a bit.

    a = 100020004000503; // Cross int limit.
    printf("Value of a is %d\n", a);

    a = -4325987632; // Cross int limit.
    printf("Value of a is %d\n", a);

    return 0;
}