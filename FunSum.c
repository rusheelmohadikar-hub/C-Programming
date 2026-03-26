#include<stdio.h>
int sum(int a,int b);
int main(){
    int a,b;
    printf("Enter First Numbe:");
    scanf("%d",&a);
    printf("Enter Second Numbe:");
    scanf("%d",&b);
    sum(a,b);
    return 0;
}
int sum(int a,int b){
    int sum ;
    sum = a + b;
    printf("Sum : %d",sum);
}