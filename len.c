#include<stdio.h> 
#include<string.h>
#include<stdlib.h>

int main(){
	char name[20];

	printf("enter you name  ");
	scanf("%s", &name);

	printf("your name is %s and the length of you name is %d\n",name, strlen(name));
return 0;
}

