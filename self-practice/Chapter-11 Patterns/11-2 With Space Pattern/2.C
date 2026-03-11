#include <stdio.h>
#include <conio.h>
main ()
{
	int i, j, n = 1;
	clrscr ();
	printf("\n\n");

	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= 5; j++)
		{
			if (i <= j)
			{
				printf("%d\t", n);
				n += 2;
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n\n");
	}

	getch ();
}