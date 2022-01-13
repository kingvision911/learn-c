#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char myname[20];

	printf("Enter any name to calculate the lenght of it ");
	scanf("%s", &myname);

	printf("your name is %s in capital letters %s", myname, strstr(myname));
	
	/*	
	if (myname >= A && myname <= Z) {
		printf("%s", myname);
	}
	else {
		myname += 25;
		printf("%d", myname);
	}
	*/
	return 0;
}


