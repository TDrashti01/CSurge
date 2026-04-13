#include <stdio.h>

int sum(int *p, int *q)
{
    return *p + *q;
}

int main()
{
    int a = 15, b = 12;
    printf("%d", sum(&a, &b));

    return 0;
}