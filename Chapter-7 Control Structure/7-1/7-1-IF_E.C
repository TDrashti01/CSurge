#include <stdio.h>
#include <conio.h>

main()
{
	int age;

	clrscr();

	printf("\n\tEnter Your Age :");
	scanf("%d", &age);

	if (age >= 18)
	{
		printf("\n\tYou Can Vote !!");
	}
	else
	{
		printf("\n\tYou Cannot Vote !!");
	}

	getch();
}
