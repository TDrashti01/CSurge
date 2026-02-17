#include <stdio.h>
#include <conio.h>

main ()
{
	int n, arm, rem, sum = 0;

	clrscr ();

	printf("\n\tEnter any Number :");
	scanf("%d", &n);

	arm = n;

	while (n != 0)
	{
		rem = n % 10;
		sum = sum + (rem * rem * rem);
		n = n / 10;
	}

	printf("\n\tSum\t: %d", sum);

	if (arm  == sum)
		printf("\n\tThis is Armstrong Number");
	else
		printf("\n\tThis is Not an Armstrong Number");


	getch();
}