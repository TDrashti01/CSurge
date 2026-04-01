#include <stdio.h>

//TNRS => Take Nothing But Return Something

int sum()
{
    int a, b;

    printf("Enter a and b : ");
    scanf("%d %d", &a, &b);

    return a+b;
}

int inputInt()
{
    int n;

    scanf("%d", &n);

    return n;
}

int main ()
{
    printf("Ans : %d", sum());

    int num;

    printf("\nEnter any Number :");
    num = inputInt();

    printf("\n\n");
    printf("Number : %d", num);

    return 0;
}