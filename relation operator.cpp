#include<stdio.h>
#include<conio.h> 
main()
{
	int a,b;
	printf("enter the number:");
	scanf("%d",&a);
	printf("enter the number:");
	scanf("%d",&b);
	printf("\n%d<%d is %d",a,b,a<b);
	printf("\n%d<=%d is %d",a,b,a<=b);
	printf("\n%d>%d is %d",a,b,a>b);
	printf("\n%d>=%d is %d",a,b,a>=b);
	printf("\n%d==%d is %d",a,b,a==b);
	printf("\n%d!=%d is %d",a,b,a!=b);
	getch();
}
