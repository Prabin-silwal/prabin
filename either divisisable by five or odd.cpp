//this program is written by prabin silwal
#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter the number:");
	scanf("%d",&a);
	if ((a%2==1)&&(a%5==0))
{
	printf("the given number is odd and divisiable by 5");
}
    else
{
    printf("the given number is even and not divisiable by 5");
}
    getch();
}
