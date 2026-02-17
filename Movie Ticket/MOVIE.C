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
		case 3:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tTollywood Movie Types");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Romance Movies");
			printf("\n\t4. Thriller Fiction (Sci-Fi) Movies");
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

		case 4:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tKollywood Movie Types");
			printf("\n\t1. Action Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Romance Movies");
			printf("\n\t4. Thriller Fiction (Sci-Fi) Movies");
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

		case 5:
			clrscr();
			textcolor(RED);
			cprintf("\n\n WELCOME TO PARADISE CINEMAS ");
			textcolor(WHITE);
			printf("\n\n\tMollywood Movie Types");
			printf("\n\t1. Drama Movies");
			printf("\n\t2. Comedy Movies");
			printf("\n\t3. Thriller Movies");
			printf("\n\t4. Action Fiction (Sci-Fi) Movies");
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
					printf("\n\t1. ");
					printf("\n\t2. ");
					printf("\n\t3. ");
					printf("\n\t4. ");
					printf("\n\t5. ");
					printf("\n\t6. ");
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

				}
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
