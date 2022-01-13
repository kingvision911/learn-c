#include <stdio.h>

int main()
{

	int a = 10;
	int *p;

	p = &a;

	printf("the address stored variable p is : %x\n", p);
	printf("the value stored in variable p is : %d\n", *p);
	
	return 0;

}
