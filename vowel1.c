#include<stdio.h>
#include<ctype.h>

int main()
{
	char len[150];
	int vowel, consonant, digits, spaces;

	vowel = consonant = digits = spaces = 0;
		
	printf("type in sentence : ");
	fgets(len, sizeof(len), stdin);

	for (int i = 0; len[i] != '\0'; ++i)
	{
		len[i] = tolower(len[i]);

		if (len[i] == 'a' || len[i] == 'e' || len[i] == 'i' || len[i] == 'o' || len[i] == 'u')
		{
			++vowel;
		}
		else if ( len[i] >= 'a' && len[i] <= 'z' )
		{
			++consonant;
		}
		else if ( len[i] >= '0' && len[i] <= '9')
		{
			++digits;
		}
		else if ( len[i] == ' ')
		{ 
			++spaces;
		}
	}
	printf("vowel = %d \n", vowel);
	printf("consonant = %d \n", consonant);
	printf("digits = %d \n", digits);
	printf("spaces = %d \n ", spaces);
	return 0;
	
}

