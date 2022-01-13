#include<stdio.h>

void main()
{
	static int a[] = {12, 34, 53, 60, 11, 10};
	int *p, *p1;

	p = &a[1];
	p1 = &a[6];

	printf("%d %d\n",*p1, *p);
	printf("%d %d\n",p1, p);

	printf("%d\n",*p1 - *p);
	printf("%d\n", p1 - p);

}
