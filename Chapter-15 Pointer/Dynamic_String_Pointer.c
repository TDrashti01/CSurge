#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;

    printf("Enter a string: ");
    scanf("%s", str);

    ptr = str;

    printf("Original: %s\n", ptr);
    
    return 0;
}