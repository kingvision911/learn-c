#include <stdio.h>
#include <stdlib.h>

	float findSQRT(int number){
		int start = 0, end = number;
		int mid;

		// to store teh answer
		float answer;

		// to find integral part of square root of number
		while (start <= end) {
			//find mid
			mid =( start + end) / 2;
			
			// if number is perfect square then break

			if (mid * mid == number) {
				answer = mid;
				break;
	                 }
			if (mid * mid < number) {
				answer = start;

				// start should be changed 
				start = mid + 1;
			}
			//Decriment end if integral part line on the lefe side of the mid
			else {
		          	end = mid - 1;
			}
		}

	 	// To find the fractional part of sqare root upto 5 decimal 
		float increment = 0.1;
		for  (int i = 0; i < 5; i++) {
			while  (answer * answer < number) {
				answer += increment;

			}
			//loop terminate 
			//when answer * answer > number
			answer = answer - increment / 10;
		}
		return answer;
	}
	// Driver code 
	int main () {
		// Given numbet N
		int N = 12;

		// Function call

		printf("%f", findSQRT(number));
		return 0;
	}

