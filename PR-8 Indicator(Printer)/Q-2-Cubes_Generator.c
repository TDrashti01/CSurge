#include <stdio.h>

void cubeElements(int *a, int size)
{
    printf("\nCubes of all elements :\n");

    for (int i = 0; i < size * size; i++)
    {
        printf("%d ", (*(a + i)) * (*(a + i)) * (*(a + i)));

        if ((i + 1) % size == 0)
        {
            printf("\n");
        }
    }
}

int main()
{
    int size;

    printf("Enter array size :");
    scanf("%d", &size);

    int a[size][size];

    printf("\nEnter array elements :\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("Enter a[%d][%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    cubeElements(&a[0][0], size);

    return 0;
}