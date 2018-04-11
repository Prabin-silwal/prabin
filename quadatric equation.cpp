#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a,b,c,x1,x2,s1;
	printf("enter the value of a:");
	scanf("%f",&a);
	printf("enter the value of b:");
	scanf("%f",&b);
	printf("enter the value of c:");
	scanf("%f",&c);
	s1=sqrt(b*b-4*a*c);
	x1=((-b+s1)/2*a);
	x2=((-b-s1)/2*a);
	printf("the quadratic equation of %f&%f",x1,x2);
	getch();
	
	
}
