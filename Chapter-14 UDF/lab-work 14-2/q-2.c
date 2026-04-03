#include <stdio.h>
#include "function.c"

int main()
{
    char str[50];

    printf("Enter any string: ");
    scanf("%[^\n]", &str);

    int len = stringLen(str);

    printf("Length is: %d\n", len);

    return 0;
}