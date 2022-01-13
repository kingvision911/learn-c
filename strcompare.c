#include <stdio.h>
#include <string.h>

void main()
{
	char str1[100], str2[100];

	printf("type in two names to compare them\n");

	fgets(str1, 100, stdin);
	fgets(str2, 100, stdin);

	if ( strcmp ( str1, str2 ) == 0 )
	{
		printf("those names are the same\n");
	}

	else if ( strcmp ( str1, str2 ) != 0)
	{
		printf("those names are not the same\n");
	}
	
}

