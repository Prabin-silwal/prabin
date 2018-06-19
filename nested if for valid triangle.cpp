#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c;
	printf("enter the value of side of triangle:");
	scanf("%d%d%d",&a,&b,&c);
	if (a+b>c)
		{
			if (b+c>a)
		{
			printf("it is valid triangle");
		}
				{
				if (a+c>b)
				{
					printf("it is valid triangle");
				}
				else
				{
				 printf("the triangle is not valid");	
				}
				}
			else 
			{
				printf("the triangle is not valid");
			}
		
		}
		else 
		{
			printf("the given triangle is not valid");
		}
		getch();
}

