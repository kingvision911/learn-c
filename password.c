                                                                                                                                                                                               
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char myname[6];
	char name[] = "bigvai";

	printf("Enter your password\n");
       	fgets(myname, sizeof(myname), stdin);
	
	for (int i = 0; myname[i] != '\0'; ++i)
	{
		myname[i] = tolower( myname[i]);
		if (myname[i] == name[i])
		{
			printf("wellcome sir\n");
			break;
		}
		
		else if (myname[i] != name[i])
		{
			printf("you are not wellcome\n");
			break;
		}		
	}
	printf("Thanks!\n");
}
