#include <stdio.h>

main ()
{
    int row, col;

    printf("Enter the array's Row size :");
    scanf("%d", &row);

    printf("Enter the array's Column size :");
    scanf("%d", &col);

    int a [row] [col];

    printf("\n\nArray Input\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter a [%d] [%d] :", i, j);
            scanf("%d", &a [i] [j]);
        }
        printf("\n");    
    }

    printf("\n\nArray Output\n\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d\t", a [i] [j]);           
        }
        printf("\n");        
    }

    int sum = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            sum += a [i] [j];
        }
    }

    printf("\n\n");
    printf("Sum of 2D Array : %d\n", sum);
    printf("Average of an Array : %.2f\n", (float)sum / (row * col));     
    
}