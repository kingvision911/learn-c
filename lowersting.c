#include <stdio.h>
#include <string.h>

int main()
{
	char s[500];
	int i;

	printf("string in upper case is ");
	fgets(s, 500, stdin);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}

	}
	printf("string in lower case is %s", s);
	return 0;
}
