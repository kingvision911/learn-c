#include <stdio.h>
	int main () {
	
	int voltage;
	int current;
	int resistance;

	printf("Enter current (i): ");
	scanf("%d", &current);
	
	printf("Enter resistance (R): ");
	scanf("%d", &resistance);

	voltage = current * resistance;

	printf("voltage (v) is: %d\n\n", voltage);
	
	return 0;
	}
