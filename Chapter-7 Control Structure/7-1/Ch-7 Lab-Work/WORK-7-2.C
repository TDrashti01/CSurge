#include <stdio.h>
#include <conio.h>

main ()
{
	int num;

	clrscr();

	printf("\n\n\tEnter Any Number :");
	scanf("%d", &num);

	if (num < 0)
	{
		printf("\n\tThis Number is Negative !!!");
	}
	else if (num > 0)
	{
		printf("\n\tThis Number is Positive !!!");
	}
	else
	{
		printf("\n\tThis NUmber is Netural");
	}

	getch();
}