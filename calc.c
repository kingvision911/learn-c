#include<stdio.h>

 void add ();
 void substraction();
 void division();
 void multiplication();

int main(){
   printf("type, 1 for addition,2 for substraction, 3 for division, 4 for multiplication\n");

   int enter;
   
   scanf("%d", &enter);

   if (enter == 1 ){
        add();
   }
   else if (enter == 2){
        substraction();
   }
   else if (enter == 3){
       division();
   }
   else if (enter == 4){
         multiplication();
   }
   return 0;
}
  void add(){
    int a, b, c;
    printf("Enter the number to add : \n");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("Answer : %d\n", c);
}

 void substraction(){
    int numa, numb, numc;
    printf("Enter the number to substract : \n");
    scanf("%d %d", &numa, numb);
    numc = numa - numb;
    printf("Answer : \n",numc);
 }

 void division(){
    int numg, numf, numh;
    printf("Enter the number to substract : \n");
    scanf("%d %d", &numg, numf);
    numh = numg - numf;
    printf("Answer : \n",numh);
 }

 void multiplication(){
    int numm, numn, numv;
    printf("Enter the number to substract : \n");
    scanf("%d %d", &numm, numn);
    numv = numm - numn;
    printf("Answer : \n",numv);
 }




