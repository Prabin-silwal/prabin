#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c;
	printf("enter the sides of triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if ((a==b)||(b==c)||(c==a))
	{
	printf("the side of given triangle is isoceles");
}
   else 
{
   printf("the given side of triangle is not isoceleus");
}
    getch();
}
