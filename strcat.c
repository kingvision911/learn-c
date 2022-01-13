
#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10], str2[10];
	
	printf("enter two strings ");

	fgets(str1, 10, stdin);
	fgets(str2, 10, stdin);

	strcat(str1, str2);

	printf("first string: %s\t\t second string: %s\n", str1, str2);

	strcat(str1,"-one");

	printf("Now the first string is %s \n", str1);

}
