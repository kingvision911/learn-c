// the program to swap two numbers 
#include<stdio.h>

int change(int a, int b);

void main()
{
	int a, b, c;

	printf("type in number to swap it");
	scanf("%d %d", &a, &b);

	a = change(a, b);
	b = change(a, b);

	printf("the number after swaping %d \n",a );
	printf("the number after swaping %d \n", b);
}

int change(int a, int b)
{
	int d;
	int c;

	d = a;
	a = b;
	b = d;

return c;
}
