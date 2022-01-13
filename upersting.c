#include <stdio.h>
#include <string.h>

int main()
{
	char s[500];
	int i;

	printf("string in lower case is ");
	fgets(s, 500, stdin);

	for ( i = 0; s[i] != '\0'; i++ )
	{
		if ( s[i] >= 'a' && s[i] <= 'z' )
		{
			s[i] = s[i] - 32;
		}
	
	}

	printf("\nstring in upper case is %s ", s);
	return 0;
}
