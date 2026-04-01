#include <stdio.h>

// TSRS => Take Something And Return Something

int sub(int a, int b)
{
    return a-b;
}

int main ()
{
    int a, b;

    printf("ENter a and b :");
    scanf("%d %d", &a, &b);

    int ans = sub(a,b);
    printf("Ans : %d", ans);

    return 0;
}