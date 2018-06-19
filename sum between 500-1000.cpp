#include<stdio.h>
#include<conio.h>
main()
{
	int i=500,a=0;
	while (i<=1000)
	{
		i++;
		a=a+i;
	}
		printf("the sum of all odd numbers between 500 to 1000 is %d\n",a);	
	getch();
}
