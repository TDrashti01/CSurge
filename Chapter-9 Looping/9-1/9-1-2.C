#include <stdio.h>
#include <conio.h>

main()
{
	int i = 1, n;

	clrscr();

	printf("\n\tEnter Any Number :");
	scanf("%d", &n);
	clrscr();

	while (i <= n)
	{
		printf("%d.\t", i);
		i++;
	}

	getch();
}