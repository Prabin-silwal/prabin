#include<stdio.h>
#include<conio.h>
main()
{
	int ch;
	printf("enter the number:");
	scanf("%d",&ch);
	
	switch (ch)
	{
		case 1:
			printf("sunday");
			break;
		case 2:
			printf("monday");
			break;
		case 3:
			printf("tuesday");
			break;
		case 4:
			printf("wednesday");
			break;
		case 5:
			printf("thursday");
			break;
		case 6:
			printf("friday");
			break;
		case 7:
			printf("saturday");
			break:
		default:
			printf("invalid input");			
	}
	getch();
}
