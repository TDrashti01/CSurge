#include <stdio.h>
#include "function.c"

int main()
{
    int size;

    printf("Enter array size: ");
    size = inputInt();

    int arr[size];

    arrayInput(arr, size);

    int sum = arrayElementsSum(arr, size);

    printf("\n\nThe sum of an Array: %d\n", sum);

    return 0;
}