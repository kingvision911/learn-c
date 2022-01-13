#include <stdio.h>
#include <string.h>

int main()
{
    char str1[255];
    char str2[255];
    printf("str1: "); fgets(str1);
    printf("str2: "); fgets(str2);

    strlwr(str1);
    strupr(str2);
    puts (str1);
    puts (str2);
    return 0;
}
