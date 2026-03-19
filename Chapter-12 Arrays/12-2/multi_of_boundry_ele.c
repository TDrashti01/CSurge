#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Array's row :");
    scanf("%d", &row);

    printf("Enter Array's column :");
    scanf("%d", &col);

    int a[row][col];
    int multi = 1;

    printf("\n\nEnter array's elements :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("\n\nBoundry Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
                printf("%d ", a[i][j]);

            else
                printf("  ");
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || j == 0 || i == row - 1 || j == col - 1)
                multi *= a [i] [j];
        }
    }
    
    printf("\n\n");
    printf("The Multipication of Boundry elements of an Array : %d", multi);
}