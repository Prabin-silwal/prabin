#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int a,b,c,ch,s1,s;
	float area;
		printf("\n**Menu**");
		printf("\n1.circle");
		printf("\n2.rectangle");
		printf("\n3.square");
		printf("\n4.triangle");
		printf("\nenter your choice:");
		scanf("%d",&ch);
	
	switch (ch)
{
	case 1:
		printf("enter the radius:");
		scanf("%d",&a);
		area=3.14*a*a;
		printf("area is %f",area);
		break;
	case 2:
		printf("enter the length and breadth:");
		scanf("%d",&a,&b);
		area=a*b;
		printf("area is %f",area);
		break;
	case 3:
		printf("enter the length:");
		scanf("%d",&a);
		area=4*a;
		printf("area is %f",area);
		break;
	case 4:
		printf("enter the length breadth and height:");
		scanf("%d%d%d,&a,&b,&c");
		s=(a+b+c)/2;
		s1=(s*(s-a)*(s-b)*(s-c));
		area=sqrt(s1);
		printf("area is %f",area);
		break;
		default:
		printf("invalid input");
}	
getch();

}
