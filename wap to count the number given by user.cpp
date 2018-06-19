//wap to count the number of digits of any number given by user
#include<stdio.h>
#include<conio.h>
main()
{
	int n,i=0;
	printf("enter the number:");
	scanf("%d",&n);
	while (n>0)
	{
		n=n/10;
		i++;
	}
	printf("the total number is %d",i);
	
	getch();
}
