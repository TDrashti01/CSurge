#include <stdio.h>
#include <conio.h>

main()
{
	int i = 1, n;

	clrscr();

	printf("\n\tEnter any number :");
	scanf("%d", &n);

	while (n >= i)
	{
		printf("%d.\t" , n);
		n--;
	}

	getch();
}