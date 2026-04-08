#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[5];
    int n = 5, t;

    printf("Enter elements of the array :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Unsorted Order of the array :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] < arr[j])
            {
                t = arr[i];
                arr[i] = arr[j];
                arr[j] = t;
            }
        }
    }

    printf("\n\nSorted Order of the array :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}