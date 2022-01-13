  // is the operator which is used to calculate the result of remainder after division 
// the program to find the remaider of two values

#include <stdio.h>

int main(){
	int x, y, answer;
	
	printf("Enter two numbers to find the remainder \n");
	scanf("%d %d", &x ,&y);

	answer = x % y;
	printf("The remaider of the two number is %d \n",answer);
}
