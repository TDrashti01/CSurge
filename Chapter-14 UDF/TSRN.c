#include <stdio.h>

//TSRN => [Take Something But Return Nothing]

void sum(int a, int b, int c); //Parameter Passing


void getChar(char ch)
{
    printf("My Character is %c\n", ch);
}

void getfloat(float PI)
{
    printf("PI : %.2f\n", PI);
}

void main()
{
    sum (45, 10, 20);

    int a, b, c;

    printf("Enter a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    sum (a, b, c); //Argument Passing

    getChar('D');
    getChar('R');
    getChar('A');
    getChar('S');
    getChar('H');
    getChar('T');
    getChar('I');

    getfloat(3.14);

}

void sum(int x, int y, int z)
{
    printf("%d + %d + %d = %d\n", x, y, z, x + y + z);
}