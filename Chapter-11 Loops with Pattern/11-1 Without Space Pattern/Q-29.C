#include <stdio.h>
#include <conio.h>

main ()
{
	int i, j, n;

	clrscr();

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (j == 1)
				printf("%d ", i);
			else
				printf("%d ", 5 * j - (j * (j - 1)) / 2 - (i - j));
		}
		printf("\n");
	}

	getch();
}