#include<stdio.h>

void main()
{
	int n;

	for (n = 0; n <= 9; n++)

	{
		if (n == 4)
			continue;

		printf(" %d ", n);

	}

	{
		printf("out of loop\n");

	}

}
