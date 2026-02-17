#include <stdio.h>
#include <conio.h>

main()
{
	int n, i, prime = 0;

	clrscr();

	printf("\n\tEnter any Number :");
	scanf("%d", &n);

	i = 1;

	while (i <= n)
	{
		if (n % i == 0)
			prime++;

		i++;
	}

	if (prime == 2)
		printf("\n\tThis is Prime Number");
	else
		printf("\n\tThis is Not a Prime Number");


	getch();
}