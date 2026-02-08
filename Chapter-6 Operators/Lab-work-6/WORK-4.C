#include <stdio.h>
#include <conio.h>

main ()
{

	int a, b, c;

	clrscr();

	printf("\n\n\tBefore Swap Two Variables\n");

	printf("\tEnter Value of a\t: ");
	scanf("%d", &a);

	printf("\n\tEnter Value of b\t: ");
	scanf("%d", &b);

	printf("\tAfter Awap Two Variable\n");

	c = a;
	a = b;
	b = c;

	printf("\n\t a = %d\n", a);

	printf("\n\t b = %d\n", b);


	getch();
}
