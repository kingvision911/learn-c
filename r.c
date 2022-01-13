#include<stdio.h>

int sum(int a, int b);

void main()
{
	int a, b, c;

	printf("type in numbers \n");

	scanf("%d%d",&a, &b);

	c = sum(a, b);

	printf("The answer is %d \n",c);

	
}
int sum(int a, int b){
	
	int c = a + b;

	return c;
}
