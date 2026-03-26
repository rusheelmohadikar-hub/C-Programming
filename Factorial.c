#include<stdio.h>
int main(){
    int num ,fact=1,i;
    printf("Enter a Number: ");
    scanf("%d",&num);
    if(num == 0){
        printf("Factorial of 0 is 1");
    }
    else if("num>0"){
    for(i=1;i<=num;i++){
        fact = fact*i;
    }
    printf("Factorial of Number %d is %d",num,fact);
    }
    else{
        printf("ERROR!");
    }
    return 0;
}