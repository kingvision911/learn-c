#include<stdio.h>

int swap(int x, int y);

void main()
{
	int x, y;

	printf("type in number\n");
	scanf("%d %d", &x, &y);
	
	x = x + y;
	y = x - y;
	x = x - y;

	printf("%d\n%d\n",x ,y);
}
