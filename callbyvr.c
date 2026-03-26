//call by value.
#include<stdio.h>
int number(int *num);
int main(){
   int a;
   printf("Enter a Number: ");
   scanf("%d",&a);
   printf("Before entering a Function:%d\n",a);
   number(&a);
   printf("After comming out of the function number: %d\n",a);
   return 0;
}
int number(int *num){
    printf("Before getting added to 100 = %d\n",*num);
    *num = *num+100;
    printf("After getting added to 100 :%d\n",*num);
    return 0;
}