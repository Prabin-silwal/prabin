//write a program to find the following using menu based program
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
	int ch,a,b;
	float c,e;
	char alphabet,d;
	printf("***Menu***");
	printf("\n1.to check whether the number is odd or even");
	printf("\n2.to check whether the character is alphabet or not");
	printf("\n3.to check whether it is vowel or not");
	printf("\n4.to check whether it is divisiable by 5 or 11");
	printf("\n5.to exit");
	printf("\nenter your choice:");
	scanf("%d",&ch);

		
	switch (ch)
{
	
	case 1:
		printf("enter the number:");
		scanf("%f",&a);
		b=a%2;
	if (b==0)
	{	
		printf("\ngiven number is even");
	}
	else 
	{
		printf("\ngiven number is odd");
	}
	break;
	case 2:
		printf("enter the character:");
		scanf("%c",&alphabet);
	if ((alphabet>='a' && alphabet<='z') || (alphabet>='A' && alphabet<='Z'))
		{
			printf(" \nit is an alphabet");
		}
	else
		{
			printf(" \nit is not an alphabet");
		}
		break;
	case 3:
			printf("enter the alphabet:");
			scanf("%c",&d);
		if ((d=='a'||c=='e'||c=='i'||c=='o'||c=='u') && (c=='A'||c=='E'||c=='O'||c=='I'||c=='U'))
			{
				printf("\nit is an vowel");
			}
		else
			{
				printf("\nit is not an vowel");
			}
			break;
		case 4:
				printf("enter the number:");
				scanf("%f",&b);
	
				
				
}
getch();
}
