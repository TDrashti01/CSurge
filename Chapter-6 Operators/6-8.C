#include <stdio.h>
#include <conio.h>

main()
{
	//Float to Char
	float a = 83.13, b = 68.25;

	clrscr();

	printf("Number\t\t: %f\n",a);

	printf("Number\t\t: %d\n",(int)a);

	printf("Character\t: %c\n\n\n\n",(char)a);

	printf("Number\t\t: %f\n",b);

	printf("Number\t\t: %d\n",(int)b);

	printf("Character\t: %c\n",(char)b);

	getch();
}