#include<stdio.h>
#include<conio.h>
main()
{
	float p,t,r,si;
	printf("enter the value of principle:");
	scanf("%f",&p);
	printf("enter the total time:");
	scanf("%f",&t);
	printf("enter the rate:");
	scanf("%f",&r);
	si=(p*t*r)/100;
	printf("the simple interest is %.2f",si);
	getch();
}
