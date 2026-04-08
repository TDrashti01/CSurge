#include <stdio.h>

int main()
{
    int arr[10] = {10, 21, 63, 74, 59, 67, 97, 38, 449, 110};

    int n;
    int found = 0;

    printf("Enter the number you want to search :");
    scanf("%d", &n);

    for (int i = 0; i < 10; i++)
    {
        if (n==arr[i])
        {
            found=1;
            break;
        }
    }

    if (found==1)
        printf("YES, number is present in the array\n");
    else
        printf("NO, number is NOT present in the array\n");
    
    return 0;
}