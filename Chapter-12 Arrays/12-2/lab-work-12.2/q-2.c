#include <stdio.h>

main()
{
    int row, col;

    printf("Enter Number of Rows of Array :");
    scanf("%d", &row);

    printf("Enter Number of Columns of Array :");
    scanf("%d", &col);

    int A[row][col], B[row][col], C[row][col];

    printf("\n\nEnter array A's elements :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nEnter array B's elements :\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &B[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
        printf("\n");
    }

    printf("\n\nArray A's Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", A[i][j]);
        }
        printf("\n");
    }

    printf("\n\nArray B's Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", B[i][j]);
        }
        printf("\n");
    }

    printf("\n\nSum of array A & B\n\n");
    printf("Output of array C\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }
}