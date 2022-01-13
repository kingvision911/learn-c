#include <stdio.h>

void main()
{
	int i, arr[9];
	int sum = 0;

	for (i = 0; i <= 9; i++)

	{

	printf("enter the value of %d ", i);
	scanf("%d", &arr[i]);

	}
	
	printf(" the value of element is ");

	for (i = 0; i <= 9; i++)

	{

	sum = sum + arr[i];

	}

	printf("%d \n", sum);

}
