#include <stdio.h>
#include "function.c"

int main()
{
    int size;

    printf("Enter number of elements :");
    size=inputInt();

    int a[size];

    arrayInput(a, size);

    printf("\n\n");
    printf("Sum of Array Elements : %d\n\n", arrayElementsSum(a,size));

    int len = stringLen("My Name is Drashti Thummar");
    printf("String Length is %d", len);

    return 0;
}