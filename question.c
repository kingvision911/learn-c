#include <stdio.h>
#include <stdlib.h>

/*calculate the average of three numbers*/

int main() {
float a, b, c;
float avg;
printf("Enter three number to find average: \n");
scanf("%f %f %f",&a, &b, &c);
avg = (a + b + c) / 3;
printf("Average: %2f\n", avg);
return 0;
}

