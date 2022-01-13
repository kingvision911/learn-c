#include<stdio.h>

int fun(int a, int b);

int main()
{
	int a, b, num;

	printf("type in number\n");
	scanf("%d %d", &a, &b);

	num = fun(a , b);

	printf("The answer is %d\n", num);
}

int fun(int a, int b)
{
	int x;
	x = a + b;
	return x;

}
