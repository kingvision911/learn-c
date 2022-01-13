#include <stdio.h>

int main()
{
	int var = 1;
	int *ptr;
	
	ptr = &var;

	printf("\ndirect asseccing variable %d", var);
	printf("\n indirect asseccing variable %d", *ptr);

	printf("\n direct asseccing address %d", &var);
	printf("\n indirect asseccing address %d", ptr);
	
	*ptr = 45;
	printf("\nindirect asseccing value is %d\n", *ptr);

	return 0;

}
