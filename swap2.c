#include <stdio.h>
int main(){
int a, b, c;
printf("Enter two interger\n");
scanf("%d %d", &a, &b);
printf("before rounding \n fist number= %d\n second number = %d\n ",a ,b);
c = a;
a = b;
b = c;

printf("After swaping\n First number = %d\n second number = %d\n",a ,b);

return 0;
}

