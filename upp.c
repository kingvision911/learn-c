#include<stdio.h>
#include<string.h>

int main()
{
	char name[50];
	char myname[50];

	printf("your name: ");
	scanf("%s",name);

	printf("your last name: "); 
	scanf("%s", myname);

	strlwr(name);
	strupr(myname);
	
	printf(name);
	printf(myname);
	
	return 0;
}

