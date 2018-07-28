#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
char a[100][30];
char b[100][30];

int main()
{
system("COLOR D7");
printf("\n\n\t\t\t\t MINI DICTIONARY");
strcpy(a[0],"about");
strcpy(b[0],"Tell about something");
strcpy(a[1],"bc");
strcpy(b[1],"g");
	int ch,i;
	p1:
	printf("\n\n\t\t------------------------------------------");
	printf("\n\t\tEnter 1 to see all words of Dictionary");
	printf("\n\t\tEnter 2 to Search");
	printf("\n\t\tEnter 3 to Add");
	printf("\n\t\tEnter 4 to Delete");
	printf("\n\t\tEnter 0 to Exit\n");
	printf("\t\t-------------------------------------------\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			{
				for(i=0;a[i][i]!='\0';i++)
				{
					printf("\n\t\t\t%d. %s : %s",i+1,a[i],b[i]);
				}
			goto p1;
			}
		case 2:
			{
				int flag=0;
				char sc[20];
				printf("Enter Word to Search:");
				scanf("%s",sc);
				for(int i=0;i<100;i++)
				{
				if(strcmp(sc,a[i])==0)
				{
				  printf("\n\t\t\t%d. %s : %s",i+1,sc,b[i]);
				  flag=1;
				  break;
				}
		    	}
				if(flag==0)
				printf("Word Not Found");
			goto p1;
			}
		case 3:
			{
				char ad1[20],ad2[50];
				int ix;
				printf("Add");
				printf("Enter Word to Add to Dictionary:");
				scanf("%s",ad1);
				printf("Enter Meaning of Word:");
				scanf("%s50[^\n]",ad2);
				fflush(stdin);
				for(i=0;a[i][i]!=NULL;i++)
				{
				 ix=i;
				}
				strcpy(a[ix+1],ad1);
				strcpy(b[ix+1],ad2);
				printf("Copy Succesfull");
				fflush(stdin);
				goto p1;
			}
		case 4:
			{
				char del[20];
				int flag2=0;
                printf("\n\t\t\t DELETE FROM DICTIONARY");
                printf("\nEnter Word to Delete from Dicktionary:");
                scanf("%s",del);
                for(i=0;a[i][i]!=NULL;i++)
                {
                	if(strcmp(a[i],del)==0)
                	{
                		strcpy(a[i]," ");
                		strcpy(b[i]," ");
                		flag2=1;
                		printf("Deleted Successfully");
					}
				}
				if(flag2==0)
				{
					printf("Word Not Found");
				}
				goto p1;
			}
		case 0:
			{
				exit(0);
				break;
			}
		default:
			{
				printf("Wrong Choice!Try Again");
				goto p1;
			}
			
	}
}
