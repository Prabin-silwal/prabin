//wap to impelement login scenario of the atm. the program should ask the user to enter the pin number untill the pin is
 //correct once the pin number is correct display the welcome message to the user, the correct pin nmuber is 1234.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main()
{
	int pin,count=0;
	printf("****Menu****");
	printf("choose your language:");
	do
	{
		system("cls");
		if (count>0)
		{
			printf("invalid pin\n");
		}
		printf("enter the pin:");
		scanf("%d",&pin);
		count++;
	}
	while (pin!=1234&&count<3);
	system("cls");
	if (pin==1234)
	{
		printf("welcome to the bank ATM");
	}
	else 
	{
		printf("too many invalid pins");
	}
	getch();
}
 
