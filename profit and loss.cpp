//wap to find the profit and loss
#include<stdio.h>
#include<conio.h>
main()
{
	float cp,sp,profit,loss;
	printf("enter the cp and sp:");
	scanf("%f%f",&cp,&sp);
	
	if (cp<sp)
	{
		profit=(sp-cp);
		printf("profit is %f",profit);
	}
	else if (cp>sp)
	{
		loss=(cp-sp);
		printf("profit is %f",loss);
	}

	getch();
}
