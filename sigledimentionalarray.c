#include <stdio.h>

void main()
{
	int arr[9], i;
	

	printf("enter the array element ");

	for (i = 0; i <= 9; i++)
	{
		scanf("%d", &arr[i]);
		check(arr[i]);

	}

}

void check(int num)
{

	if (num % 2 == 0)
	
	{
		
		printf("%d is eve \n", num);

	}



else

{

	printf("%d is odd \n",num);

}

}
