#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int fun(int);

void main()
{

	int f;
	int num;

	printf("type in number\n");
	scanf("%d",&num);
	
	f = fact(num);

	printf("answer is %d\n",f);

}

int fun(int num)
{

	if (num == 0 || num == 1)
		return 1;
	else
	return (num * fact(num-1));

}
