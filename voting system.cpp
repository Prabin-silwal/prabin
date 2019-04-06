#include<stdio.h>
#include<conio.h>
#include<stdlib.h> //for system("cls")
struct person
{
	int id;
	int pin;
	char name[20];
}p,d[7];
//a,b is gobal variable
int a=0,b=0;
//declare countvote function to count the vote 
void countVote(int id)
{
    if(id==1)
        a++;
	else
        b++;
	system("cls");
	printf("\nYour vote is counted.");
}
// function verification is declared with return type
int verification(void)
{
	FILE * fptr;
	int j=0, i,x=0 ;
	printf("\nEnter Your ID_no. : ");
	scanf("%d",&p.id);
	printf("\nEnter your four(4) digit pin : ");
	scanf("%d",&p.pin);
	fptr=fopen("data.txt","r");
	do{
		fscanf(fptr,"%d %s %d",&d[j].id,&d[j].name,&d[j].pin);
		if((p.id==d[j].id)&&(p.pin==d[j].pin))
			{
				x=1;
				printf("\nWELCOME !!!\n%s",d[j].name);
		 		break;
			}
		else
			{
				j++;
			}
	}while(j<8);
	fclose(fptr);
	return x;
}
int main()
{
	FILE * fptr;
	char ch, c,d;
	int z;
	printf("Welcome!!!\n");
	do{
		printf("\n\nDo you want to vote?\n(type 'y' for yes and 'n'for no):\n");
		scanf("%s",&c);
		if(c=='y'||c=='Y')
		{
			//verification function call
			z= verification();
			if(z==1)
			 	{
			 		printf("\nChoose your candidate!!!\n");
					printf("a. Ram\n");
					printf("b. Shyam\n");
					printf("\n\nYour choice is : ");
					scanf("%s",&ch);
				//switch case is used
					switch(ch)
						{
							case 'a':
								{
									printf("\n\nDo you want to confirm your vote?\n(type 'y' for yes and 'n'for no):\n");
 									scanf("%s",&d);
									if(d=='y'||d=='Y')
										{
											countVote(1);
										}
									else
										{
											system("cls");
											printf("\nVote to your favourite one!");
										}
									break;
								}
							case 'b':
								{
									printf("\n\nDo you want to confirm your vote?\n(type 'y' for yes and 'n'for no)\n:");
 									scanf("%s",&d);
									if(d=='y'||d=='Y')
										{
											countVote(2);
										}
									else
										{
											system("cls");
											printf("\nVote to your favourite one!");
										}
									break;
								}
						 	default:
			 			   		{
			 	  			 		system("cls");
							 		printf("Error! operator is not correct.");
								 	break;
			           			}
						}

				}
			else
			{

				system("cls");
				printf("\nYour Id_no. or Pin number is not valid!!! ");
			}

 		}
	}while(c!='n');
	fptr= fopen("result.txt","w");
    fprintf(fptr,"ram = %d\nshyam = %d",a,b);
	fclose(fptr);
    printf("Result of this voting is save in the file.\n\nTHANK YOU!!!");
	getch();
	return(0);
}
