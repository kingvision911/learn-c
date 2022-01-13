#include <stdio.h>

int main()
{
	int a[5] = {1, 2, 3, 4, 5};
	int *p;

	p = a;

	printf("pointering the array elements poiner\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%x\n", *p);
		p++;
	}
	return 0;
}	
