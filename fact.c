#include<stdio.h>
int fun(int num){
    int fact=1;
    if(num == 0){
        return 1;
    }
    fact = num*fun(num-1);
    return fact;
}
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    printf("Factorial: %d\n",fun(num));
    return 0;
}