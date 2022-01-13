#include<stdio.h>

// the program to calculate the square root of two numbers 

int main(){
	int a;
	int i = 0;
	int result = 1;

	printf("input any number to find the square root: \n");
	scanf("%d", &a);

	while (i < 5){
		result = result * a;
		++i;
	}
	printf("%d\n", result);
	return 0;
}
