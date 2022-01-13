#include <stdio.h>

	int main(){

	int length, width, area;
	
	printf("length: ");
	scanf("%d", &length);
	
	printf("width: ");
	scanf("%d", &width);
	
	area = length * width;
	printf("area of a rectangle is:  %dcm\n", area);
	
	return 0;
	}
