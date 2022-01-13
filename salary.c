#include <stdio.h>
float division(int a, int b);

int main(){
	float salary;
	float total_salary;
	float x; 

	printf("Enter your salary: \n");	
	scanf("%f", &salary);

	float div1 = division(30 , 100);
       	printf("%f\n", div1);

	total_salary = salary - div1;
	printf("%f\n", total_salary);

}
float division(int a, int b){
	float c;
	c = (float) a / b;
	return c;
}
