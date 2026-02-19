#include <stdio.h>
#include <conio.h>

main ()
{
	int i = 10;

	clrscr();

	while (i >= 1)
	{
		printf("\n\n\t%d.", i);
		i--;
	}

	getch();
}