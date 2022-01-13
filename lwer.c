#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char name[20];

	printf("Enter you name in upper case to convert it in to lower case ");
	scanf("%s", &name);

	printf("your name is %s in lower case %s", name ,strlwer(name));
return 0;
}

