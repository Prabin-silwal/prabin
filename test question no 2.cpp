//this program is written by prabin silwal
//bcsit suway interntional business school
//bcsit first semester
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int feet1,feet2,inch1,inch2,inch3,feet3;
	printf("enter the feet1 first:");
	scanf("%d",&feet1);
	printf("enter the feet2:");
	scanf("%d",&feet2);
	printf("enter the first inch1 first:");
	scanf("%d",&inch1);
	printf("enter the inch2:");
	scanf("%d",&inch2);
	feet3=feet1+feet2;
	inch3=inch1+inch2;
	if (inch3>=12)
	{
	inch3=inch3-12;
	feet3=feet3+1;
}	
	printf("sum is %d feet %d inch",feet3,inch3);
	getch();
}
