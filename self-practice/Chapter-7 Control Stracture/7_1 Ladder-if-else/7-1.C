#include <stdio.h>
#include <conio.h>

main()
{
	int units;

	clrscr();

	printf("\n\n\tEnter units of Electricity Bill :");
	scanf("%d", &units);

	if (units >= 0 && units <= 100)
	{
		printf("\n\tLow Usage !!!");
	}
	else if (units >= 101 && units <= 300)
	{
		printf("\n\tMedium Usage !!!");
	}
	else if (units >= 301 && units <= 500)
	{
		printf("\n\tHigh Usage !!!");
	}
	else
	{
		printf("\n\tCommercial Usage !!!");
	}

	getch();
}