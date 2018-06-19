#include<stdio.h>
#include<conio.h>
main()
{
	int s1;
	printf("enter the number:");
	scanf("%d",&s1);
	
	if(s1>=80)
	{
		printf("distinction");
	}
	else if (s1>=65) 
	{
		printf("first division");
	}
	else if (s1>=50)
	{
		printf("second division");
	}
	else if (s1<35)
	{
	printf("fail");
	}
	getch();
}
