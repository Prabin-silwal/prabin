#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
{
	printf("the given character is vowel");
}
	else 
{
	printf("the given character is not vowel");
}
	getch();
}
