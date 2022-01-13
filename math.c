#include <stdio.h>

int main(){

	int a;
	int i = 0;
	int result = 1;

	printf("Enter any number: ");
	scanf("%d", &a);

	while (i < 5) {
		result = result * a;
		++i;
	}
	
	printf("%d\n", result);

	return 0;
}
