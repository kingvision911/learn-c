#include<stdio.h>
#include<string.h>

void main()
{
	char chr[50];
	int st, s, up;

	printf("enter a string \n");

	fgets(chr, 50, stdin);
		
	st = strlen(chr);
	s = st - 1;

	printf("the lenght of the string is %d \n",s);

}
