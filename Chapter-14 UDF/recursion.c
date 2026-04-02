#include <stdio.h>

void printLoop(int start, int end)
{
    if (start<=end)
    {
        printf("%d\n", start);

        start++;

        printLoop(start, end);
    }    
}

int main()
{
    printLoop(10, 37);

    return 0;
}