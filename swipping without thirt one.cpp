#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	printf("enter the value of a and b:");
	scanf("%d %d",&a,&b);
	a=(a-b);
	b=(a+b);
	a=(b-a);
	printf("after swiping first number=%d\n",a);
	printf("after the swipping second number=%d\n",b);
	getch();
}
