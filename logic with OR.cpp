#include<stdio.h>
#include<conio.h>
main()
{
	int a=5,b=8,c=4,d=1;
	printf("%d<%d && %d>%d is %d",a,b,c,d,a<b&&c>d);
	printf("\n%d>%d && %d>%d is %d",a,b,c,d,a>b&&d>d);
	printf("\n%d<=%d && %d<=%d is %d",a,b,c,d,a<=b&&d<=c);
	printf("\n%d!=%d && %d<=%d is %d",a,b,c,d,a!=b&&c<=d);
	printf("\n%d<%d || %d>%d is %d",a,b,c,d,a<b||c>d);
	printf("\n%d>%d || %d>%d is %d",a,b,c,d,a>b||d>d);
	printf("\n%d<=%d || %d<=%d is %d",a,b,c,d,a<=b||d<=c);
	printf("\n%d!=%d || %d<=%d is %d",a,b,c,d,a!=b||c<=d);
	getch();
}
