#include <stdio.h>
#include <conio.h>

main ()
{
	int n, sum, rem;

	clrscr();

	printf("\n\n\tEnter any number :");
	scanf("%d", &n);

	while ( n > 9)
	{
		sum = 0;

		while (n != 0)
		{
			rem = n % 10;
			sum = sum + rem;
			n = n / 10;
		}

		n = sum;

	}

	if (n == 1)
		printf("\n\tThis is Magic Number");
	else
		printf("\n\tThis is Not a Magic Number");


	getch();
}