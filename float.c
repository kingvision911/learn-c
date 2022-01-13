#include <stdio.h>
int main () {
	float number1;
	float number2;
	float number3;
	float total;
	float total1;

	printf("input 3 number to add them: \n");
	scanf("%f %f %f", &number1, &number2, &number3);
	
	total = number1 + number2 + number3;
	total1 = (number1 + number2 + number3) / 3;

	printf("the total is: %.3f\n", total);
	printf("the avaragge is: %.3f\n", total1);

}
