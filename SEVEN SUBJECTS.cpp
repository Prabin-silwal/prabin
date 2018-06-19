  #include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	 float s1,s2,s3,s4,s5,s6,s7,average,total,totalmarks=700,percentage;
	 printf("enter the marks\n");
	 scanf("%f %f %f %f %f %f %f",&s1,&s2,&s3,&s4,&s5,&s6,&s7);
	 total=s1+s2+s3+s4+s5+s6+s7;
	 average=total/7;
	 percentage=(total/totalmarks)*100;
	 printf("the total is %f",total);
	 printf("\nthe average is %f",average);
	 printf("\nthe percentage is %f",percentage);
	 getch();
}

