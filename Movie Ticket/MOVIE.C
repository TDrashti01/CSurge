#include <stdio.h>
#include <conio.h>

main()
{
	int woods, movie_type, movie, tickets, members, food, food_qty, time_slot;

	float seat_price = 0, sub_total, food_price = 0, food_total, cgst, sgst, net_amount;

	char name [50];

	clrscr();
	textcolor(RED);
	cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
	textcolor(WHITE);

	printf("\n\n\tEnter Your Name :");
	scanf("%s", name);

	clrscr();
	textcolor(RED);
	cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
	textcolor(WHITE);
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
	scanf("%d", &woods);

	switch (woods)
	{
		case 1:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
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
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tHOLLYWOOD ACTION MOVIES");
					printf("\n\t1. Avengers: Endgame");
					printf("\n\t2. Mad Max: Fury zroad");
					printf("\n\t3. John Wick");
					printf("\n\t4. Die Hard");
					printf("\n\t5. The Dark KNight");
					printf("\n\t6. Mission: Impossible - Fallout");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 250;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 180;
							break;

						case 5:
							seat_price = 240;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;

				case 2:
					clrscr();
					printf("\n\n\tHOLLYWOOD HORROR MOVIES");
					printf("\n\t1. The Conjuring");
					printf("\n\t2. IT");
					printf("\n\t3. A Quite Place");
					printf("\n\t4. Insidious");
					printf("\n\t5. The Nun");
					printf("\n\t6. Annabelle");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 180;
							break;

					}
					break;

				case 3:
					clrscr();
					printf("\n\n\tHOLLYWOOD COMEDY MOVIES");
					printf("\n\t1. The Hangover");
					printf("\n\t2. Home Alone");
					printf("\n\t3. Dumb and Dumber");
					printf("\n\t4. Superbbad");
					printf("\n\t5. Step Brothers");
					printf("\n\t6. Mr. Bran's Holiday");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 250;
							break;

						case 3:
							seat_price = 260;
							break;

						case 4:
							seat_price = 170;
							break;

						case 5:
							seat_price = 270;
							break;

						case 6:
							seat_price = 250;
							break;

					}
					break;

				case 4:
					clrscr();
					printf("\n\n\tHOLLYWOOD SCIENCE FICTION MOVIES");
					printf("\n\t1. Intersteller");
					printf("\n\t2. Inception");
					printf("\n\t3. The Matrix");
					printf("\n\t4. Avater");
					printf("\n\t5. Gravity");
					printf("\n\t6. Blade Runner 2049");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 250;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 260;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 240;
							break;

					}
					break;

				case 5:
					clrscr();
					printf("\n\n\tHOLLYWOOD ROMANTIC MOVIES");
					printf("\n\t1. Titanic");
					printf("\n\t2. The Notebook");
					printf("\n\t3. La La Land");
					printf("\n\t4. Pretty Womenn");
					printf("\n\t5. A Walk to Remember");
					printf("\n\t6. Me Before You");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 280;
							break;

						case 3:
							seat_price = 200;
							break;


						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 230;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 6:
					clrscr();
					printf("\n\n\tHOLLYWOOD THRILLER MOVIES");
					printf("\n\t1. Se7ven");
					printf("\n\t2. Gone Girl");
					printf("\n\t3. Shutter Island");
					printf("\n\t4. Prisoners");
					printf("\n\t5. The Silence of the Lambs");
					printf("\n\t6. Fight Club");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 290;
							break;

					}
					break;

				case 7:
					clrscr();
					printf("\n\n\tHOLLYWOOD ANIMATION MOVIES");
					printf("\n\t1. Toy Story");
					printf("\n\t2. Frozen");
					printf("\n\t3. Finding Nemo");
					printf("\n\t4. The Lion King");
					printf("\n\t5. Up");
					printf("\n\t6. Sherk");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 280;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 270;
							break;

						case 5:
							seat_price = 250;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 8:
					clrscr();
					printf("\n\n\tHOLLYWOOD FANTASY MOVIES");
					printf("\n\t1. Harry Potter and the Sorcerer's Stone");
					printf("\n\t2. The Lord of the Rings: The Fellwship of the Ring");
					printf("\n\t3. The Hobbit: An Unexpected Journey");
					printf("\n\t4. Pirates of the Caribbean: The Curse of the Black Pearl");
					printf("\n\t5. Fantastic Beasts and Where to Find Them");
					printf("\n\t6. Alice in Wonderland");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 240;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 9:
					clrscr();
					printf("\n\n\tHOLLYWOOD ADVENTURE MOVIES");
					printf("\n\t1. Jurassic Park");
					printf("\n\t2. Indiana Jones andn the Riders of the Lost Ark");
					printf("\n\t3. The Mummy");
					printf("\n\t4. Jumanji: Welcome to the Jungle");
					printf("\n\t5. King Kong");
					printf("\n\t6. Uncharted");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 290;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 10:
					clrscr();
					printf("\n\n\tHOLLYWOOD DRAMA MOVIES");
					printf("\n\t1. Forrest Gump");
					printf("\n\t2. The Shawshank ReRedemption");
					printf("\n\t3. The Godfather");
					printf("\n\t4. Joker");
					printf("\n\t5. Gladitor");
					printf("\n\t6. A Beautiful Mind");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;
				}
				break;

		case 2:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tBollywood Movie Types");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Romance Movies");
			printf("\n\t4. Thriller Fiction (Sci-Fi) Movies");
			printf("\n\t5. Horror Movies");
			printf("\n\t6. Drama Movies");
			printf("\n\t7. Crime Movies");
			printf("\n\t8. Family Movies");
			printf("\n\t9. Musical Movies");
			printf("\n\t10. Biopic Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD ACTION MOVIES");
					printf("\n\t1. War");
					printf("\n\t2. Dhoom");
					printf("\n\t3. Singham");
					printf("\n\t4. Baaghi");
					printf("\n\t5. Ghajini");
					printf("\n\t6. Krrish");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 290;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;

				case 2:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD COMEDY MOVIES");
					printf("\n\t1. Hera Pheri");
					printf("\n\t2. Welcome");
					printf("\n\t3. Golmaal");
					printf("\n\t4. Dhamaal");
					printf("\n\t5. Chup Chup Ke");
					printf("\n\t6. Munna Bhai M.B.B.S.");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 19;
							break;

						case 2:
							seat_price = 240;
							break;

						case 3:
							seat_price = 280;
							break;

						case 4:
							seat_price = 220;
							break;

						case 5:
							seat_price = 240;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 3:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD ROMANCE MOVIES");
					printf("\n\t1. Dilwale Dulhania Le Jayenge");
					printf("\n\t2. Kuch Kuch Hota Hai");
					printf("\n\t3. Ashaiqui 2");
					printf("\n\t4. Veer - Zaara");
					printf("\n\t5. Jab We Met");
					printf("\n\t6. Kal Ho Naa Ho");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 190;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 180;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 4:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD THRILLER MOVIES");
					printf("\n\t1. Kahaani");
					printf("\n\t2. Drishyam");
					printf("\n\t3. Andhadhun");
					printf("\n\t4. Badla");
					printf("\n\t5. Talaash");
					printf("\n\t6. Raaz");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 210;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;


				case 5:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD HORROR MOVIES");
					printf("\n\t1. Bhoot");
					printf("\n\t2. Raaz");
					printf("\n\t3. 1920");
					printf("\n\t4. Stree");
					printf("\n\t5. Pari");
					printf("\n\t6. Bhediya");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 170;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 190;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 6:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD DRAMA MOVIES");
					printf("\n\t1. Taare Zameen Par");
					printf("\n\t2. 3 Iditos");
					printf("\n\t3. Lagaan");
					printf("\n\t4. Pink");
					printf("\n\t5. Swades");
					printf("\n\t6. Dangal");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;

				case 7:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD CRIME MOVIES");
					printf("\n\t1. Gangs of Wasseypur");
					printf("\n\t2. Company");
					printf("\n\t3. Satya");
					printf("\n\t4. Once Upon a Time in Mumbaai");
					printf("\n\t5. Shootout at Lokhandwala");
					printf("\n\t6. Raees");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;

				case 8:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD FAMILY MOVIES");
					printf("\n\t1. Hum Aapke Hain Koun...!");
					printf("\n\t2. Kabhi Khushi Kabhiw Gham");
					printf("\n\t3. Baghban");
					printf("\n\t4. Piku");
					printf("\n\t5. Chak De! India");
					printf("\n\t6. Udaan");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 9:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBOLLYWOOD MUSICAL MOVIES");
					printf("\n\t1. Rockstar");
					printf("\n\t2. Aashiqui");
					printf("\n\t3. Ae Dil HAi Mushkil");
					printf("\n\t4. Taal");
					printf("\n\t5. Dil Se..");
					printf("\n\t6. Kabir Singh");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 190;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 10:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tHOLLYWOOD BIOPIC MOVIES");
					printf("\n\t1. Sanju");
					printf("\n\t2. Bhaag Milkha Bhaag");
					printf("\n\t3. MS Dhoni: The Untold Story");
					printf("\n\t4. Mary Kom");
					printf("\n\t5. Neerja");
					printf("\n\t6. Super 30");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 230;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;
				}
				break;

		case 3:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tTollywood Movie Types");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Romance Movies");
			printf("\n\t4. Thriller Movies");
			printf("\n\t5. Horror Movies");
			printf("\n\t6. Drama Movies");
			printf("\n\t7. Family Movies");
			printf("\n\t8. Fantacy Movies");
			printf("\n\t9. Crime Movies");
			printf("\n\t10. Biopic Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD ACTION MOVIES");
					printf("\n\t1. Baahubali: The Begining");
					printf("\n\t2. Baahubali 2: The Conclusion");
					printf("\n\t3. Magadheera");
					printf("\n\t4. Saaho");
					printf("\n\t5. Sye");
					printf("\n\t6. Vikramarkudu");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 250;
							break;

						case 2:
							seat_price = 300;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 240;
							break;

						case 5:
							seat_price = 180;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 2:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD COMEDY MOVIES");
					printf("\n\t1. Nuvvu Naaku Nachav");
					printf("\n\t2. Athadu");
					printf("\n\t3. Dhee");
					printf("\n\t4. Ready");
					printf("\n\t5. Kick");
					printf("\n\t6. F2: Fun and Frustration");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 170;
							break;

						case 4:
							seat_price = 180;
							break;

						case 5:
							seat_price = 190;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 3:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD ROMANCE MOVIES");
					printf("\n\t1. Geetha Govindam");
					printf("\n\t2. Arya");
					printf("\n\t3. Ye Maaya Chesave");
					printf("\n\t4. Bommarillu");
					printf("\n\t5. Manam");
					printf("\n\t6. Love Story");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 4:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD THRILLER MOVIES");
					printf("\n\t1. Eega");
					printf("\n\t2. Kshanam");
					printf("\n\t3. Goodachari");
					printf("\n\t4. Rangasthalam");
					printf("\n\t5. 1: Nenokkadine");
					printf("\n\t6. Drushyam");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 230;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 5:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD HORROR MOVIES");
					printf("\n\t1. Arundhati");
					printf("\n\t2. Raju Gari Gadhi");
					printf("\n\t3. Masooda");
					printf("\n\t4. Awe");
					printf("\n\t5. Gruham");
					printf("\n\t6. Bhaagamathie");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 190;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 6:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD DRAMA MOVIES");
					printf("\n\t1. Leader");
					printf("\n\t2. Vedam");
					printf("\n\t3. Jersey");
					printf("\n\t4. Rudhramadevi");
					printf("\n\t5. Mahanati");
					printf("\n\t6. C/o Kancharapalem");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 190;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 220;
							break;

						case 5:
							seat_price = 240;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 7:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD FAMILY MOVIES");
					printf("\n\t1. Sankarabharanamlo Sivudu");
					printf("\n\t2. Gorintaku");
					printf("\n\t3. Ala Vailunta Puramulo");
					printf("\n\t4. SVSC");
					printf("\n\t5. Attarintiki Daredi");
					printf("\n\t6. Brindavanam");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 170;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 8:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD FANTASY MOVIES");
					printf("\n\t1. Mayabazar");
					printf("\n\t2. Anji");
					printf("\n\t3. Yamadonga");
					printf("\n\t4. Jagadeka Veerudu Atiloka Sundari");
					printf("\n\t5. Baahubali: The Beginning");
					printf("\n\t6. Baahubali 2: The Conclusion");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 250;
							break;

						case 6:
							seat_price = 300;
							break;

					}
					break;

				case 9:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD CRIME MOVIES");
					printf("\n\t1. Khaidi");
					printf("\n\t2. Tagore");
					printf("\n\t3. Evaru");
					printf("\n\t4. Vakeel Saab");
					printf("\n\t5. Hit: The First Case");
					printf("\n\t6. Rakhta Charitra");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 230;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 10:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tTOLLYWOOD BIOPIC MOVIES");
					printf("\n\t1. Mahanati");
					printf("\n\t2. Rudhramadevi");
					printf("\n\t3. Yatra");
					printf("\n\t4. Gautamiputra Satakarni");
					printf("\n\t5. Major");
					printf("\n\t6. Shankarabharanamlo");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 240;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 230;
							break;

						case 5:
							seat_price = 240;
							break;

						case 6:
							seat_price = 180;
							break;

					}
					break;
				}
				break;


		case 4:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tKollywood Movie Types");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Romance Movies");
			printf("\n\t4. Thriller Movies");
			printf("\n\t5. Horror Movies");
			printf("\n\t6. Drama Movies");
			printf("\n\t7. Crime Movies");
			printf("\n\t8. Family Movies");
			printf("\n\t9. Musical Movies");
			printf("\n\t10. Sports Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD ACTION MOVIES");
					printf("\n\t1. Vikram");
					printf("\n\t2. Master");
					printf("\n\t3. Ghajini");
					printf("\n\t4. Theri");
					printf("\n\t5. Kaithi");
					printf("\n\t6. Veeram");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 230;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 220;
							break;

						case 5:
							seat_price = 230;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 2:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD COMEDY MOVIES");
					printf("\n\t1. Panchathanthiram");
					printf("\n\t2. Boss Engira Baskaran");
					printf("\n\t3. Soodhu Kavvum");
					printf("\n\t4. Kalakakappu");
					printf("\n\t5. OK Kanmani");
					printf("\n\t6. Doctoor");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 170;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 180;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 3:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD ROMANCE MOVIES");
					printf("\n\t1. Vinnaithaandi Varuvaayaa");
					printf("\n\t2. 96");
					printf("\n\t3. Alaipayuthey");
					printf("\n\t4. Kaadhal");
					printf("\n\t5. Remo");
					printf("\n\t6. Roja");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 180;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 4:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD THRILLER MOVIES");
					printf("\n\t1. Ratasasan");
					printf("\n\t2. Dhuruvangal Pathinaaru");
					printf("\n\t3. Thani Oruvan");
					printf("\n\t4. Yennai Arindhaal");
					printf("\n\t5. Game Over");
					printf("\n\t6. Kuttrame Thandanai");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 5:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD HORROR MOVIES");
					printf("\n\t1. Chandramukhi");
					printf("\n\t2. Pizza");
					printf("\n\t3. Demonte Colony");
					printf("\n\t4. Yaamirukka Bayamey");
					printf("\n\t5. Maya");
					printf("\n\t6. Kanchana");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 6:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD DRAMA MOVIES");
					printf("\n\t1. Pariyerum Perumal");
					printf("\n\t2. Asuran");
					printf("\n\t3. Anbe Sivam");
					printf("\n\t4. Karnan");
					printf("\n\t5. Vada Chennai");
					printf("\n\t6. Jai Bhim");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 230;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 7:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD CRIME MOVIES");
					printf("\n\t1. Visaranai");
					printf("\n\t2. Vada Chennai");
					printf("\n\t3. Pudhupettai");
					printf("\n\t4. Aaranya Kaandam");
					printf("\n\t5. Jigarthanda");
					printf("\n\t6. Kaala");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 210;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 8:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD FAMILY MOVIES");
					printf("\n\t1. Pasanga");
					printf("\n\t2. Varuthapadatha Valibar Sangam");
					printf("\n\t3. Abhiyum Naanumm");
					printf("\n\t4. Deivamagal");
					printf("\n\t5. Kadaikutty Singam");
					printf("\n\t6. Uthama Puthiran");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 170;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 160;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 180;
							break;

					}
					break;

				case 9:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD MUSICAL MOVIES");
					printf("\n\t1. Roja");
					printf("\n\t2. Bombay");
					printf("\n\t3. Alaipayuthey");
					printf("\n\t4. Vinnaithaandi Varuvaayaa");
					printf("\n\t5. Kandukondain Kandukondain");
					printf("\n\t6. Kadhalan");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 190;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 180;
							break;

						case 6:
							seat_price = 180;
							break;

					}
					break;

				case 10:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tKOLLYWOOD BIOPIC MOVIES");
					printf("\n\t1. Chak De! India");
					printf("\n\t2. Irudhi Suttru");
					printf("\n\t3. Bigil");
					printf("\n\t4. Jeeva");
					printf("\n\t5. Kanaa");
					printf("\n\t6. Vennila Kabaddi Kuzhu");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 210;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;
				}
				break;


		case 5:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tMollywood Movie Types");
			printf("\n\t1. Drama Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Thriller Movies");
			printf("\n\t4. Action Movies");
			printf("\n\t5. Romance Movies");
			printf("\n\t6. Horror Movies");
			printf("\n\t7. Crime Movies");
			printf("\n\t8. Family Movies");
			printf("\n\t9. Social / Realistic Movies");
			printf("\n\t10. Mystery Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD DRAMA MOVIES");
					printf("\n\t1. Drishyam");
					printf("\n\t2. Kireedam");
					printf("\n\t3. Thanmathra");
					printf("\n\t4. Ayyappanum Koshiyum");
					printf("\n\t5. Peranbu");
					printf("\n\t6. Ustad Hotel");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 230;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 2:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD COMEDY MOVIES");
					printf("\n\t1. Punjabi House");
					printf("\n\t2. Kilukkam");
					printf("\n\t3. Godfather");
					printf("\n\t4. CID Moosa");
					printf("\n\t5. Kalyanaraman");
					printf("\n\t6. In Harihar Nagar");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 170;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 180;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 170;
							break;

						case 6:
							seat_price = 170;
							break;

					}
					break;

				case 3:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD THRILLER MOVIES");
					printf("\n\t1. Mumbai Police");
					printf("\n\t2. Anjaam Pathiraa");
					printf("\n\t3. Memories");
					printf("\n\t4. Rorschach");
					printf("\n\t5. Forensic");
					printf("\n\t6. Helen");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 240;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 4:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD ACTION MOVIES");
					printf("\n\t1. Lucifer");
					printf("\n\t2. Narasimham");
					printf("\n\t3. Rajamanikyam");
					printf("\n\t4. Pulimurugan");
					printf("\n\t5. Spadikam");
					printf("\n\t6. Bheeshma Parvam");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 250;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 260;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 240;
							break;

					}
					break;

				case 5:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD ROMANCE MOVIES");
					printf("\n\t1. Premam");
					printf("\n\t2. Hridayam");
					printf("\n\t3. Om Shanti Oshana");
					printf("\n\t4. Mayaanadhi");
					printf("\n\t5. Bangalore Days");
					printf("\n\t6. Ennu Ninte Moideen");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 6:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD HORROR MOVIES");
					printf("\n\t1. Manichitrathazhu");
					printf("\n\t2. Ezra");
					printf("\n\t3. Bhoothakaalam");
					printf("\n\t4. Pretham");
					printf("\n\t5. Romancham");
					printf("\n\t6. Winter");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 240;
							break;

						case 6:
							seat_price = 180;
							break;

					}
					break;

				case 7:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD CRIME MOVIES");
					printf("\n\t1. Iyobinte Pusthakam");
					printf("\n\t2. Kammatti Paadam");
					printf("\n\t3. Big B");
					printf("\n\t4. Charlie");
					printf("\n\t5. Angamaly Diaries");
					printf("\n\t6. Kurup");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 240;
							break;

					}
					break;

				case 8:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD FAMILY MOVIES");
					printf("\n\t1. Thoovanathumbikal");
					printf("\n\t2. Sandaesham");
					printf("\n\t3. Achuvinte Amma");
					printf("\n\t4. Veendum Chila Veettukaryangal");
					printf("\n\t5. How Old Are You");
					printf("\n\t6. Jacobinte Swargarajyam");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 170;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 170;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 9:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD SOCIAL MOVIES");
					printf("\n\t1. The Great Indian Kitchen");
					printf("\n\t2. Jallikattu");
					printf("\n\t3. Uyare");
					printf("\n\t4. Sudani from Nigeria");
					printf("\n\t5. Take Off");
					printf("\n\t6. Virus");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;

				case 10:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tMOLLYWOOD MYSTERY MOVIES");
					printf("\n\t1. CBI Diary Kurippu");
					printf("\n\t2. Utharam");
					printf("\n\t3. Grandmaster");
					printf("\n\t4. Detective");
					printf("\n\t5. Anweshippin Kandethum");
					printf("\n\t6. ");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 170;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 190;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;

				}
				break;

		case 6:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tSandalwood Movie Types");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Romance Movies");
			printf("\n\t4. Thriller Movies");
			printf("\n\t5. Horror Movies");
			printf("\n\t6. Drama Movies");
			printf("\n\t7. Crime Movies");
			printf("\n\t8. Family Movies");
			printf("\n\t9. Historical Movies");
			printf("\n\t10. Biopic Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD ACTION MOVIES");
					printf("\n\t1. KGF: Chapter 1");
					printf("\n\t2. KGF: Chapter 2");
					printf("\n\t3. Ugramm");
					printf("\n\t4. Mufti");
					printf("\n\t5. Tagaru");
					printf("\n\t6. Vikrant Rona");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 250;
							break;

						case 2:
							seat_price = 300;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 230;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 240;
							break;

					}
					break;

				case 2:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD COMEDY MOVIES");
					printf("\n\t1. Ganesha Sunramanya");
					printf("\n\t2. Mr. and Mrs. Ramachari");
					printf("\n\t3. Kirik Party");
					printf("\n\t4. French Biiriyani");
					printf("\n\t5. Victoria");
					printf("\n\t6. Bell Bottom");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 150;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 170;
							break;

						case 5:
							seat_price = 160;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 3:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD ROMANCE MOVIES");
					printf("\n\t1. Mungaru Male");
					printf("\n\t2. Googly");
					printf("\n\t3. Love Mocktail");
					printf("\n\t4. Milana");
					printf("\n\t5. Dia");
					printf("\n\t6. Simple Agi Ondh Love Story");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 190;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 180;
							break;

					}
					break;

				case 4:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD THRILLER MOVIES");
					printf("\n\t1. Lucia");
					printf("\n\t2. U Turn");
					printf("\n\t3. RangiTaranga");
					printf("\n\t4. Kavaludaari");
					printf("\n\t5. Birbal Trilogy Case 1");
					printf("\n\t6. Shivaji Surathkal");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 210;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 5:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD HORROR MOVIES");
					printf("\n\t1. Shhh!");
					printf("\n\t2. Karvva");
					printf("\n\t3. Aake");
					printf("\n\t4. 6 - 5 = 2");
					printf("\n\t5. Mummy Save Me");
					printf("\n\t6. Raju Gari Gadhi Kannada Dub");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 170;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 160;
							break;

						case 5:
							seat_price = 170;
							break;

						case 6:
							seat_price = 150;
							break;

					}
					break;

				case 6:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD DRAMA MOVIES");
					printf("\n\t1. Kasturi Nivasa");
					printf("\n\t2. Thithi");
					printf("\n\t3. Dweepa");
					printf("\n\t4. Ulidavaru Kandanthe");
					printf("\n\t5. Bettada Hoovu");
					printf("\n\t6. Garuda Gamana Vrishabha Vahana");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 160;
							break;

						case 2:
							seat_price = 180;
							break;

						case 3:
							seat_price = 170;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 150;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 7:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD CRIME MOVIES");
					printf("\n\t1. Om");
					printf("\n\t2. Aa Dinagalu");
					printf("\n\t3. Jailer");
					printf("\n\t4. Tagaru");
					printf("\n\t5. Popcorn Monkey Tiger");
					printf("\n\t6. Birbal");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 190;
							break;

						case 3:
							seat_price = 180;
							break;

						case 4:
							seat_price = 220;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 8:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD FAMILY MOVIES");
					printf("\n\t1. Bangarada Manushya");
					printf("\n\t2. Chomana Dudi");
					printf("\n\t3. America America");
					printf("\n\t4. Samskara");
					printf("\n\t5. Kotha Bangaru Lokam Kannada Dub");
					printf("\n\t6. Godhi Banna Sadharana Mykattu");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 150;
							break;

						case 2:
							seat_price = 140;
							break;

						case 3:
							seat_price = 160;
							break;

						case 4:
							seat_price = 150;
							break;

						case 5:
							seat_price = 160;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 9:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD HISTORICAL MOVIES");
					printf("\n\t1. Kurukshetra");
					printf("\n\t2. Kittur Chennamma");
					printf("\n\t3. Ranadheera Kanteerava");
					printf("\n\t4. Mysore Mallige");
					printf("\n\t5. Shaakuntala Devi");
					printf("\n\t6. Kranti Veera Sangolli Rayanna");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 230;
							break;

						case 2:
							seat_price = 160;
							break;

						case 3:
							seat_price = 150;
							break;

						case 4:
							seat_price = 270;
							break;

						case 5:
							seat_price = 180;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 10:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tSANDALWOOD BIOPIC MOVIES");
					printf("\n\t1. Dr. Rajkumar");
					printf("\n\t2. Gandhada Gudi");
					printf("\n\t3. Bharjari");
					printf("\n\t4. Bell Bottom");
					printf("\n\t5. Captain");
					printf("\n\t6. 777 Charlie");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;


			}
			break;


		case 7:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tBritish Cinema Movie Types");
			printf("\n\t1. Drama Movies");
			printf("\n\t2. Action Movies");
			printf("\n\t3. Comedy Movies");
			printf("\n\t4. Romance Movies");
			printf("\n\t5. Thriller Movies");
			printf("\n\t6. Horror Movies");
			printf("\n\t7. Crime Movies");
			printf("\n\t8. Fantasy Movies");
			printf("\n\t9. Biopic Movies");
			printf("\n\t10. War Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA DRAMA MOVIES");
					printf("\n\t1. The King's Speech");
					printf("\n\t2. Slumdog Millionaire");
					printf("\n\t3. Atonement");
					printf("\n\t4. Billy Elliot");
					printf("\n\t5. The Theory of Everything");
					printf("\n\t6. The Remains of the Day");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;

				case 2:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA ACTION MOVIES");
					printf("\n\t1. Skyfall");
					printf("\n\t2. Casino Royale");
					printf("\n\t3. Kingsman: The Secret Service");
					printf("\n\t4. GoldenEye");
					printf("\n\t5. The Foreigner");
					printf("\n\t6. No Time to Die");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 250;
							break;

						case 2:
							seat_price = 240;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 220;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 260;
							break;

					}
					break;

				case 3:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA COMEDY MOVIES");
					printf("\n\t1. Joohnny English");
					printf("\n\t2. Mr. Bean's Holiday");
					printf("\n\t3. Four Weddings and a Funeral");
					printf("\n\t4. The Full Monty");
					printf("\n\t5. Hot Fuzz");
					printf("\n\t6. Monty Python and the Holy Grail");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 180;
							break;

						case 2:
							seat_price = 170;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 180;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 4:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA ROMANCE MOVIES");
					printf("\n\t1. Notting Hill");
					printf("\n\t2. Love Actully");
					printf("\n\t3. Pride & Prejudice");
					printf("\n\t4. Me Before You");
					printf("\n\t5. About Time");
					printf("\n\t6. Sense and Sensibility");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 5:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA THRILLER MOVIES");
					printf("\n\t1. Tinkar Tailor Soldior Spy");
					printf("\n\t2. The Constant Gardener");
					printf("\n\t3. Shallow Grave");
					printf("\n\t4. The Ghoat writer");
					printf("\n\t5. The Ghost Writer");
					printf("\n\t6. Eye in the Sky");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 210;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 6:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA HORROR MOVIES");
					printf("\n\t1. The Woman in Black");
					printf("\n\t2. 28 Days Later");
					printf("\n\t3. The Descent");
					printf("\n\t4. Hellraiser");
					printf("\n\t5. Saint Maud");
					printf("\n\t6. Host");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 190;
							break;

						case 4:
							seat_price = 180;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 7:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA CRIME MOVIES");
					printf("\n\t1. Lock, Stock and Two Smoking Barrels");
					printf("\n\t2. Snatch");
					printf("\n\t3. Legend");
					printf("\n\t4. Layer Cake");
					printf("\n\t5. Bronson");
					printf("\n\t6. The Long Good Friday");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 200;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 190;
						break;

						case 6:
							seat_price = 180;
							break;

					}
					break;

				case 8:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA FANTASY MOVIES");
					printf("\n\t1. Harry Potter and the Philosopher's Stone");
					printf("\n\t2. Harry Potter and the Prisoner of Azkaban");
					printf("\n\t3. Excalibur");
					printf("\n\t4. The Chronicles of Narnia: The Lion, the Witch and the Wardrobe");
					printf("\n\t5. Bright Star");
					printf("\n\t6. Alice in Wonderland");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 230;
							break;

						case 2:
							seat_price = 240;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 190;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 9:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA BIOPIC MOVIES");
					printf("\n\t1. The Imitation Game");
					printf("\n\t2. Darkest Hour");
					printf("\n\t3. Gandhi");
					printf("\n\t4. Elizabeth");
					printf("\n\t5. Spencer");
					printf("\n\t6. The Iron Lady");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 240;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 10:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tBRITISH CINEMA WAR MOVIES");
					printf("\n\t1. Dunkirk");
					printf("\n\t2. 1917");
					printf("\n\t3. Darkest Hour");
					printf("\n\t4. Bridge on the River Kwai");
					printf("\n\t5. A Bridgr Too Far");
					printf("\n\t6. The English Patient");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 260;
							break;

						case 2:
							seat_price = 250;
							break;

						case 3:
							seat_price = 240;
							break;

						case 4:
							seat_price = 230;
							break;

						case 5:
							seat_price = 220;
							break;

						case 6:
							seat_price = 230;
							break;

					}
					break;

			}
			break;

		case 8:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tJapanese Cinema Movie Types");
			printf("\n\t1. Anime Movies");
			printf("\n\t2. Action Movies");
			printf("\n\t3. Romance Movies");
			printf("\n\t4. Horror Movies");
			printf("\n\t5. Drama Movies");
			printf("\n\t6. Science Fiction Movies");
			printf("\n\t7. Historical Movies");
			printf("\n\t8. Thriller Movies");
			printf("\n\t9. Comedy Movies");
			printf("\n\t10. Fantacy Movies");
			printf("\n\tEnter Your Choice :");
			scanf("%d", &movie_type);

			switch (movie_type)
			{
				case 1:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA ANIME MOVIES");
					printf("\n\t1. Spirited Away");
					printf("\n\t2. Your Name");
					printf("\n\t3. Akira");
					printf("\n\t4. Princess Mononoke");
					printf("\n\t5. Weathering With You");
					printf("\n\t6. Grave of the Fireflies");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 240;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 220;
							break;

						case 5:
							seat_price = 230;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 2:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA ACTION MOVIES");
					printf("\n\t1. 13 Assassins");
					printf("\n\t2. Rurouni Kenshin");
					printf("\n\t3. Battle Royale");
					printf("\n\t4. Ichi the Killer");
					printf("\n\t5. Blade of the Immortal");
					printf("\n\t6. Shin Godzilla");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 230;
							break;

						case 2:
							seat_price = 240;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 230;
							break;

						case 6:
							seat_price = 250;
							break;

					}
					break;

				case 3:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA ROMANCE MOVIES");
					printf("\n\t1. Love Letter");
					printf("\n\t2. Crying Out Love in the Center of the World");
					printf("\n\t3. Norwegian Wood");
					printf("\n\t4. My Tomorrow, Your Yesterday");
					printf("\n\t5. Be With You");
					printf("\n\t6. We Were There");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 190;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 190;
							break;

						case 6:
							seat_price = 180;
							break;

					}
					break;

				case 4:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA HORROR MOVIES");
					printf("\n\t1. Ringu");
					printf("\n\t2. Ji-On: The Grudge");
					printf("\n\t3. Dark Water");
					printf("\n\t4. Noroi: The Curse");
					printf("\n\t5. Pluse");
					printf("\n\t6. Audition");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 210;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 200;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 5:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA DRAMA MOVIES");
					printf("\n\t1. Shoplifters");
					printf("\n\t2. Tokyo Story");
					printf("\n\t3. Nobody Knows");
					printf("\n\t4. Like Father, Like Son");
					printf("\n\t5. Departures");
					printf("\n\t6. Drive My Car");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 230;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 220;
							break;

						case 5:
							seat_price = 230;
							break;

						case 6:
							seat_price = 240;
							break;

					}
					break;

				case 6:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA SCIENCE FICTION MOVIES");
					printf("\n\t1. Godzilla");
					printf("\n\t2. The Girl Who Leapt Through Time");
					printf("\n\t3. Paprika");
					printf("\n\t4. Ghost in the Shell");
					printf("\n\t5. Summer Time Machine Blues");
					printf("\n\t6. Tetsuo: The Iron Man");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 220;
							break;

						case 2:
							seat_price = 210;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 230;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 190;
							break;

					}
					break;

				case 7:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA HISTORICAL MOVIES");
					printf("\n\t1. Seven Samurai");
					printf("\n\t2. Ran");
					printf("\n\t3. Yojimbo");
					printf("\n\t4. The Twilight Samurai");
					printf("\n\t5. Harakiri");
					printf("\n\t6. Samurai Rebellion");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 240;
							break;

						case 2:
							seat_price = 250;
							break;

						case 3:
							seat_price = 230;
							break;

						case 4:
							seat_price = 220;
							break;

						case 5:
							seat_price = 230;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 8:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA THRILLER MOVIES");
					printf("\n\t1. Cure");
					printf("\n\t2. Confessions");
					printf("\n\t3. The World of Kanako");
					printf("\n\t4. High and Low");
					printf("\n\t5. Cold Fish");
					printf("\n\t6. The Third Murder");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 210;
							break;

						case 2:
							seat_price = 230;
							break;

						case 3:
							seat_price = 220;
							break;

						case 4:
							seat_price = 210;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 220;
							break;

					}
					break;

				case 9:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA COMEDY MOVIES");
					printf("\n\t1. Tampopo");
					printf("\n\t2. Shall We Dance?");
					printf("\n\t3. Waterboys");
					printf("\n\t4. Swing Girls");
					printf("\n\t5. Thermae Romae");
					printf("\n\t6. One Cut of the Dead");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 190;
							break;

						case 2:
							seat_price = 200;
							break;

						case 3:
							seat_price = 180;
							break;

						case 4:
							seat_price = 190;
							break;

						case 5:
							seat_price = 200;
							break;

						case 6:
							seat_price = 210;
							break;

					}
					break;

				case 10:
					clrscr();
					textcolor(RED);
					cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
					textcolor(WHITE);
					printf("\n\n\tJAPANESE CINEMA FANTACY MOVIES");
					printf("\n\t1. Howl's Moving Castle");
					printf("\n\t2. The Tale of the Pricess Kaguya");
					printf("\n\t3. Nausica of the Valley of the Wind");
					printf("\n\t4. Casshern");
					printf("\n\t5. Onmyoji");
					printf("\n\t6. Destiny: The Tale of Kamakura");
					printf("\n\tEnter Your Choice :");
					scanf("%d", &movie);

					switch (movie)
					{
						case 1:
							seat_price = 230;
							break;

						case 2:
							seat_price = 220;
							break;

						case 3:
							seat_price = 210;
							break;

						case 4:
							seat_price = 200;
							break;

						case 5:
							seat_price = 190;
							break;

						case 6:
							seat_price = 200;
							break;

					}
					break;
			}
			break;


	}


	clrscr();
	textcolor(RED);
	cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
	textcolor(WHITE);
	printf("\n\n\tEnter Number of Tickets :");
	scanf ("%d", &tickets);

	printf("\n\n\tEnter Members :");
	scanf("%d", &members);

	clrscr();
	textcolor(RED);
	cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
	textcolor(WHITE);
	printf("\n\n\tFood Menu");
	printf("\n\t1. Popcorn (120)");
	printf("\n\t2. Coke (80)");
	printf("\n\t3. Thumsup (100)");
	printf("\n\t4. Cold Coffee (200)");
	printf("\n\t5. Cheese Sandwich (180)");
	printf("\n\t6. French Fries (170)");
	printf("\n\t7. Samosa (120)");
	printf("\n\t8. Chocolate Bar (120)");
	printf("\n\t9. Ice Cream Cup (150)");
	printf("\n\t10. Brownie (180)");
	printf("\n\tEnter Food :");
	scanf("%d", &food);

	switch (food)
	{
		case 1:
			food_price = 120;
			break;

		case 2:
			food_price = 80;
			break;

		case 3:
			food_price =100;
			break;

		case 4:
			food_price = 200;
			break;

		case 5:
			food_price = 180;
			break;

		case 6:
			food_price = 170;
			break;

		case 7:
			food_price = 120;
			break;

		case 8:
			food_price = 120;
			break;

		case 9:
			food_price = 150;
			break;

		case 10:
			food_price = 180;
			break;
	}

	printf("\n\n\tEnter Food Quantity :");
	scanf("%d", &food_qty);

	clrscr();
	textcolor(RED);
	cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
	textcolor(WHITE);
	printf("\n\n\tShow Time");
	printf("\n\t1. Morning (10:00 AM)");
	printf("\n\t2. Afternoon (2:00 PM)");
	printf("\n\t3. Evening (6:00 PM)");
	printf("\n\t4. Night (9:30 PM)");
	printf("\n\tEnter Slot Time :");
	scanf("%d", time_slot);

	sub_total = (tickets * seat_price) + (food_price * food_qty);
	cgst = sub_total * 0.09;
	sgst = sub_total * 0.09;
	net_amount = sub_total + cgst + sgst;

	clrscr();
	printf("\n\n\t======================================");
	printf("\n\n\t-------    PARADISE CINEMA     -------");
	printf("\n\n\t--------------------------------------");
	printf("\n\tCustomer Name : %s", name);
	printf("\n\tTickets       : %d", tickets);
	printf("\n\tSeat Price    : %.2f", seat_price);
	printf("\n\tSub Total     : %.2f", sub_total);
	printf("\n\tCGST (9%%)     : %.2f", cgst);
	printf("\n\tSGST (9%%)     : %.2f", sgst);
	printf("\n\n\t--------------------------------------");
	printf("\n\tNet Amount    : %.2f", net_amount);
	printf("\n\tStatus        : CONFIRMED");
	printf("\n\n\t======================================");

	getch();

}
