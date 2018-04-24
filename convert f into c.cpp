#include<stdio.h>
#include<conio.h>
main()
{
	float c,f;
	printf("enter the value of fahrenheit:");
	scanf("%f",&f);
	c=(0.55*(f-32));
	printf("the value of celcius is %.2f",c);
	getch();
}
