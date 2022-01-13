#include<stdio.h>

	int main(){
	
	int age;
	int heart_bit;
	int heart_bit1;
	int heart_bit2;
	int heart_bit3;
	int life_time_heart_bit;

	printf("Enter your age: \n");
	scanf("%d", &age);

	heart_bit = 75 * 60;
	heart_bit1 = heart_bit * 24;

	heart_bit2 = heart_bit1 * 30;
	heart_bit3 = heart_bit2 * 12;

	life_time_heart_bit = age * heart_bit3;
	printf("total life time heart bit is: %d\n\n", life_time_heart_bit );

	return 0;

	}
