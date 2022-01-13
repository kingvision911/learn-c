//operation of strings by using scanf() and printf()
//%d for decimal int
//%o for octal int 
//%x for hexa int
//%f for floats 
//%c for single character
//%s for string 

#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {

char name[20];

printf("Enter you Name : ");
scanf("%s ", &name);

printf("Welcome %s  the character of your name is %d feel free to explore\n", name, strlen(name));
 
return 0;
//other more strings  
//tsrlen ====  string length It compute the length of the string 
//strupr ======  converts the string to upper case.
//strlwer========= convert the string to lower case.
//strcmp ============ compare two strings if the strings are similar outputs is 0; ohterwise is negative or positive
//strrev ==============Revart the strings
//strcpy ===============copying strings
//stracat================concatinate two or more strings 
