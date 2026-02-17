#include <stdio.h>
#include <conio.h>

main()
{
	int n, palin, rem, rev = 0;

	clrscr();

	printf("\n\tEnter any number :");
	scanf("%d", &n);

	palin = n;

	while (n != 0)
	{
		rem = n % 10;
		rev = rev * 10 + rem;
		n = n / 10;
	}

	printf("\n\tReverse\t: %d", rev);

	if (palin == rev)
		printf("\n\tThis is Palindrom Number");
	else
		printf("\n\tThis is Not a Palindrom Number");

	getch();
}