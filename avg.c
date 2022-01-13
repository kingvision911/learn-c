#include <stdio.h>

//The program to calculate the average of three number

int main () {
        float number1;
        float number2;
        float number3;
        float total;
	float result;
	
	printf("the program to calculate the average of three numbers\n\n");
	printf("input 3 number to add them: \n");

        scanf("%f %f %f", &number1, &number2, &number3);
        total = number1 + number2 + number3;
	
	result = total / 3;
        printf("the average of three numbers is %.2f\n", result);
return 0;

}

