#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float p,w,l;
	printf("enter the length & weidth of rectangle:");
	scanf("%f %f",&l,&w);
	p=2*(l+w);
	printf("The perimeter of rectangle is %f",p);
	getch();
}
