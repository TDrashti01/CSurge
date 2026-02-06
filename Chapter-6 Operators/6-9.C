#include <stdio.h>
#include <conio.h>

main()
{
	//Char to Float

	char var = 'D', VAR = 'd';

	clrscr();

	printf("Variable\t: %c\n",var);

	printf("Variable\t: %d\n",var);

	printf("Variable\t: %f\n\n\n",(float)var);

	printf("Variable\t: %c\n",VAR);

	printf("Variable\t: %d\n",VAR);

	printf("Variable\t: %f\n\n\n",(float)VAR);

	getch();
}