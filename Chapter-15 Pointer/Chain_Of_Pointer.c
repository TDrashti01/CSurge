#include <stdio.h>

int main()
{
    int a = 16;
    int *ptr1 = &a;
    int **ptr2 = &ptr1;
    int ***ptr3 = &ptr2;

    printf("a = %d\n", *ptr1);
    printf("a = %d\n", **ptr2);
    printf("a = %d\n", ***ptr3);

    return 0;
}