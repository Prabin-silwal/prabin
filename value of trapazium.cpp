#include<stdio.h>
#include<conio.h>
main()
{
	float l,b,h,area;
	printf("enter the length,base & height of trapazium:");
	scanf("%f %f %f",&l,&b,&h);
	area=((l+b)/2*h);
	printf("the area of trapazium is %f",area);
	getch();
}
