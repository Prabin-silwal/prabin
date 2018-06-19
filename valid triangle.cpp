#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter the value of side of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c&&b+c>a&&a+c>b)
	{
		printf("the given traingle is  valid");
	}
	else 
	{
		printf("the given triangle is not valid");
	}
		getch();
}
