//wap to find the absolute number
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	float a;
	printf("enter the absoulte number:");
	scanf("%f",&a);
	
	if (a<0)
	{
		printf("the absolute number is %.2f",-a);
	}
	getch();
}
