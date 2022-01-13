#include<stdio.h>

void main()
{
	int n;

	printf("enter the number to find even\n");
	scanf("%d", &n);

	if (n % 2 == 0)

		printf("even number\n");
	
	else if (n % 2 == 1)

		printf("odd number\n");

	else
		printf("prim number\n");

}
