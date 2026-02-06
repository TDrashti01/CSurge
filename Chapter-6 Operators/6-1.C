
#include <stdio.h>
#include <conio.h>

main()
{
	int x, y, Ans;

	clrscr();

	printf("Enter Value Of x\t: ");
	scanf("%d",&x);

	printf("Enter Value of y\t: ");
	scanf("%d",&y);

	Ans = (x + y) * (x + y);

	printf("Answer\t; %d", Ans);

	getch();
}