#include<stdio.h>

void main()
{
	static int a;
	int b;

	printf("type in the number\n");
	scanf("%d %d",&a ,&b);

	a++;
	b++;
	static int c = 5;
	c++;

	printf("a = %d and b = %d and c = %d\n",a ,b ,c);

}
