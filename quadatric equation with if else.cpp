//wap to find the quadatric equation using if else .also find the imaginary ,real and unequal
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,x1,x2,d,x3;
	printf("enter the value of a:");
	scanf("%f",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	printf("enter the value of c:");
	scanf("%f",&c);
	d=b*b-4*a*c;
	if (d>0)
		{
		x1=((-b+sqrt(d))/2*a);
		x2=((-b-sqrt(d))/2*a);
		printf("\nreal and unequal");
		printf("\ntwo roots are %f %f",x1,x2);
		}
	else if (d<0)	
	{	
		printf("\nimaginary");
	}
	else if (d=0)
	{
		x3=-b/(2*a);
		printf("\nroot is %f",x3);
	
		printf("\nreal and equal");
	}
	getch();
}
