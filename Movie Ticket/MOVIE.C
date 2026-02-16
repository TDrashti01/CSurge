#include <stdio.h>
#include <conio.h>

main()
{
	int wood, movie_type, movie, tickets, members, food, food_qty, tim_slote;

	float seat_price, sub_total, food_price, food_total, cgst, sgst, net_amount;

	char name [30];

	clrscr();
	printf("\n\n\t----------------------------------------------------");
	printf("\n\n\t===== WELCOME TO PARADISE CINEMAS =====");
	printf("\n\n\t----------------------------------------------------");

	printf("\n\n\tEnter Your Name :");
	scanf("%c", name);

	clrscr();
	printf("\n\tSelect Wood");
	printf("\n\t1. Hoolywood");
	printf("\n\t2. Bollywood");
	printf("\n\t3. Tollywood");
	printf("\n\t4. Kollywood");
	printf("\n\t5. Mollywood");
	printf("\n\t6. Sandalwood");
	printf("\n\t7. British Cinema");
	printf("\n\t8. Japanese Cinema");
	printf("\n\t9. Anime Cinema");
	printf("\n\t10. Chinese Cinema");
	printf("\n\t11. French Cinema");
	printf("\n\t12. Korean Cinema");
	printf("\n\t13. German Cinema");
	printf("\n\t14. Australian Cinema");
	printf("\n\tEnter Your Choice :");
	scanf("%d", &wood);

	switch (wood)
	{
		case 1:
			clrscr();
			printf("\n\n\tHollywood Movie Types");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Horror Movies");
			printf("\n\t3. Comedy Movies");
			printf("\n\t4. Science Fiction (Sci-Fi) Movies");
			printf("\n\t5. Romantic Movies");
			printf("\n\t6. Thriller Movies");
			printf("\n\t7. Animation Movies");
			printf("\n\t8. Fantasy Movies");
			printf("\n\t9. Adventure Movies");
			printf("\n\t10. Drama Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", movie_type);

			switch (movie_type)
			{
				case 1:
				clrscr();
				printf("\n\n\tHOLLYWOOD ACTION MOVIES");
				printf("\n\t1. Avengers: Endgame");
			}


	}


	getch();
}