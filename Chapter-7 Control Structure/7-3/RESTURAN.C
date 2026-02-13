#include <stdio.h>
#include <conio.h>

main()
{
	int menu;

	clrscr();

	printf("\n\nParadise Hotel\n\n");

	printf("\n\n\tPress 1 for South Indian Food");
	printf("\n\tPress 2 for Punjabi Food");
	printf("\n\tPress 3 for Gujarati Food");
	printf("\n\tPress 4 for chinese Food");
	printf("\n\tPress 5 for Italian Food");
	printf("\n\tPress 6 for Desserts");
	printf("\n\tEnter Your Choice :");
	scanf("%d", &menu);

	switch (menu)
	{
		case 1:
			clrscr();
			printf("\n\n\t*------\tSouth Indian Food\t------*");
			printf("\n\tPress 7 for Idli with Sambhar & Chutney");
			printf("\n\tPress 8 for Masala Dosa");
			printf("\n\tPress 9 for Uttapam");
			printf("\n\tPress 10 for Medu Vada");
			printf("\n\tPress 11 for Sambar Rice");
			printf("\n\tEnter your chice :");
			scanf("%d", &menu);

			switch (menu)
			{     	case 7:
					clrscr();
					printf("\n\n\tYour Order is Ready (Idli with Sambhar & Chutney)");
					break;
				case 8:
					clrscr();
					printf("\n\n\tYour Order is Ready (Masala Dosa)");
					break;

				case 9:
					clrscr();
					printf("\n\n\tYour Order is Ready (Uttapam)");
					break;

				case 10:
					clrscr();
					printf("\n\n\tYour Order is Ready (Medu Vada)");
					break;

				case 11:
					clrscr();
					printf("\n\n\tYour Order is Ready ( Sambar Rice)");
					break;
				}
				break;
			case 2:
			clrscr();
			printf("\n\n\t*------\tPunjabi Food\t------*");
			printf("\n\n\tPress 12 for Paneer Tikka");
			printf("\n\tPress 13 for Shahi Paneer");
			printf("\n\tPress 14 for Kaju Curry");
			printf("\n\tPress 15 for Dal Makhani");
			printf("\n\tPress 16 for Chole Bhature");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
				switch (menu)
			{     	case 12:
					clrscr();
					printf("\n\n\tYour Order is Ready (Paneer Tikka)");
					break;
				case 13:
					clrscr();
					printf("\n\n\tYour Order is Ready (Shahi Paneer)");
					break;

				case 14:
					clrscr();
					printf("\n\n\tYour Order is Ready (Kaju Curry)");
					break;

				case 15:
					clrscr();
					printf("\n\n\tYour Order is Ready (Dal Makhani)");
					break;

				case 16:
					clrscr();
					printf("\n\n\tYour Order is Ready (Chole Bhature)");
					break;
				}
				break;

		case 3:
			clrscr();
			printf("\n\n\t*------\tGujarati Food\t------*");
			printf("\n\n\tPress 17 for Undhiyu");
			printf("\n\tPress 18 for Gujarati Kadhi");
			printf("\n\tPress 19 for Dhokla");
			printf("\n\tPress 20 for Shrikhand");
			printf("\n\tPress 21 for Fafda and Jalebi");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
			break;

		case 4:
			clrscr();
			printf("\n\n\t*------\tChinese Fooed\t------*");
			printf("\n\n\tPress 22 for Veg MAnchurian");
			printf("\n\tPress 23 for Chilli Paneer");
			printf("\n\tPress 24 for Hakka Noodles");
			printf("\n\tPress 25 for Veg Spring Rolls");
			printf("\n\tPress 26 for Schezwan Rice");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
			break;

		case 5:
			clrscr();
			printf("\n\n\t*------\tItalian Food\t------*");
			printf("\n\n\tPress 27 for Cheese Garlic Bread");
			printf("\n\tPress 28 for Mergherita Pizza");
			printf("\n\tPress 29 for Cheese & Onion Pizza");
			printf("\n\tPress 30 for Lasagna");
			printf("\n\tPress 31 for Mix Sauce Pasta");
			printf("\n\tEnter your choice :");
			scanf("%d", &menu);
			break;

	       default:
			clrscr();
			printf("\n\n\t*------\tDessert Time\t------*");
			printf("\n\n\tPress 32 for Gulab Jamun");
			printf("\n\tPress 33 for Chocolate Brownie");
			printf("\n\tPress 34 for Caramel Custard");
			printf("\n\tPress 35 for Cheesecake");
			printf("\n\tPress 36 for Falooda");
			printf("\n\tPress 37 for Chocolate Mousse");
			printf("\n\tPress 38 for Tiramisu");
			printf("\n\tPress 39 for Gajar Halwa");
			printf("\n\tPress 40 for Brownie with Ice Cream");
			printf("\n\tPress 42 for Rasmalai");
			printf("\n\tEnter your choice :");
			printf("%d", &menu);
			break;

	}

	getch();
}
