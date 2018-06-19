#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter the age of first person:");
	scanf("%d",&a);
	printf("enter the age of second person:");
	scanf("%d",&b);
	printf("enter the age of third person:");
	scanf("%d",&c);
	if (a>b&&b>c&&a>c)
	{
		printf("\na is older");
		printf("\nc is youngest");
	}
	else if (a<b&&b>c&&a<c)
	{
	printf("\nb is oldest");
	printf("\na is youngest");
	}
	else if (c>a&&a<b&&c>b)
	{
		printf("\nc is oldest");
		printf("\na is youngest");
	}
	getch();
}
