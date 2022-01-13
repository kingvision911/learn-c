#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char name[20];

	printf("Enter your name to revert it ");
	scanf("%s", &name);

	printf("your name is %s and reverted is %s ",name ,strrev(name));

return 0;
}

