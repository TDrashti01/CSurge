#include <stdio.h>

int main()
{
    int arr[50];
    int n, position, value;

    printf("\nEnter number of elements in array :");
    scanf("%d", &n);

    printf("\nEnter %d elements\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Content of the array :\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d", arr[i]);
    }

    printf("\n\nEnter the position where you want to insert a new element: ");
    scanf("%d", &position);

    printf("\nEnter the value : ");
    scanf("%d", &value);

    for (int i = n; i >= position - 1; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[position - 1] = value;

    printf("\n\nArray after insertion of the new element:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}