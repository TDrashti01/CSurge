#include <stdio.h>
#include <conio.h>

main()
{
	int a, b, Result;

	clrscr();

	printf("Enter value for a\t: ");
	scanf("%d",&a);

	printf("Enter value for b\t: ");
	scanf("%d",&b);

	Result = (a + b) * (a + b) * (a + b);

	printf("Result\t: %d",Result);

	getch();
}