#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,r;
	printf("enter the first number:");
	scanf("%d",&a);
	printf("enter the second number:");
	scanf("%d",&b);
	r=(a%b);
	printf("the remainder  is %d",r);
	getch();
}
