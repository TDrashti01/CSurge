#include <stdio.h>

int main()
{
    int arr[5];

    printf("Enter elements of the array :\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Content of the array :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d \n", arr[i]);
    }

    printf("Content of the array in reverse order : \n");
    for (int i = 4; i >= 0; i--)
    {
        printf(" %d \n", arr[i]);
    } 
    
    return 0;
}