#include<stdio.h>
#include<string.h>

void main()
{
	char str1[10], str2[10];

	printf("type in string \n");

	scanf("%s", str2);

	strcpy(str1, str2);

	printf("The first string is %s\t\t the second string is %s\n", str1,str2);

	strcpy(str2,"arusha");
	strcpy(str2,"mwanza");
	
	printf("first string %s \t\t second string %s \n", str1, str2);


}
