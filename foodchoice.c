//CHALLENGE = CONDITIONAL STATEMENTS 2
//food choice


#include<stdio.h>
main()
{
	int choice=0;
	// 1. give a menu for user to select
	printf("***********MENU************ \n1.Pizza \n2.Burger \n3.Pasta \n4.French Fries \n5.Sandwich \n");
	printf("Enter the choice of food from 1 - 5: \n");
	//2. take user input on food choice
	scanf("%d",&choice);
	//3. draw a Menu Driven Program
	switch(choice)
	{
		case 1:
			printf("Food item - Pizza\nPrice - Rs 239");
		break;
		case 2:
			printf("Food item - Burger\nPrice - Rs 129");
		break;
		case 3:
			printf("Food item - Pasta\nPrice - Rs 179");
		break;
		case 4:
			printf("Food item - French Fries\nPrice - Rs 99");
		break;
		case 5:
			printf("Food item - Sandwich\nPrice - Rs 149");
		break;
		default:
			printf("Invalid Choice");
	}
	return 0;
}
