#include <stdio.h>

void cube();

int main()
{
    cube();  
    return 0;
}

void cube()
{
    int n, result;

    printf("Enter any number: ");
    scanf("%d", &n);

    result = n * n * n;
    printf("Cube is: %d", result);
}