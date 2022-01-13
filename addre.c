#include<stdio.h>

int main()
{
	int i = 10;

	int *p = &i;
	
	printf("the address of p = %d\n",p);
	printf("the value of i = %d \n", *p);
	printf("those are the aswers\n");
	return 0;
	
}


