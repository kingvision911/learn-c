#include <stdio.h>

//The prototype for the funtion 
void add();
void substraction();
void division();
void multiplication();

int main() {
	printf("Enter 1 for Addition, 2 for Substraction, 3 for division and 4 for multiplication \n \n");
	int enter;
	scanf("%d", &enter);

	if (enter == 1) {
		add();
	}
	if(enter == 2) {
	     substraction();
	}
	else if(enter == 3) {
            division();
	}
	else if(enter == 4) {
           multiplication();
	}
	else {
		printf("Try Enter the numbers again\n");
        }
	
	return 0;
}

void add() {
	int a, b, c;
	printf("Enter two numbers for the Addition of the two numbers\n\n");
	scanf("%d %d", &a, &b);
	c = a + b;
	printf("Answer : %d\n", c);
}
void substraction(){
        int e, f, g;
        printf("Enter two numbers for substraction\n\n");
        scanf("%d %d", &e, &f);
       g = e - f;
        printf("Answer : %d\n", g);
}

 void multiplication(){
    int q, w, e;
    printf("Enter the number to multipy\n");
    scanf("%d %d", &q, &w);
    e = q * w;
    printf("Answr :%d\n",e);
}

void division(){
     int f, g, h;
     printf("Enter two number to divide\n");
     scanf("%d %d", &f,&g);
     h = f / g;
     printf("Answer : %d\n",h);

}
