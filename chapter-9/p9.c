#include <stdio.h>
int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[12];
    int i, j, str1_len = 6, str2_len = 4;
    for (i = 0, j = 0; i < str1_len; i++, j++)
    {
        str3[j] = str1[i];
    }
    for (i = 0; i < str2_len; i++, j++)
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("%s\n", str3);
    return 0;
}