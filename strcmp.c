#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10], str2[10];

	printf("enter two strings \n");

	fgets(str1, 10, stdin);
	fgets(str2, 10, stdin);

	if (strcmp(str1,str2) == 0)
	{

		printf("those strings are the same\n");

	}

	else
	{
		printf("those strings are not the same\n");

	}
}
