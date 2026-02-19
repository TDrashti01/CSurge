#include <stdio.h>
#include <conio.h>

main ()
{
	char i = 'A', n;

	clrscr();

	printf("\n\n\tEnter any Capital Character :");
	scanf("%c", &n);

	while (i <= n)
	{
		printf("%c.\t", i);
		i++;
	}

	getch();
}