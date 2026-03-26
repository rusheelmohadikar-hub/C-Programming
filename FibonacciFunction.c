#include<stdio.h>
int fibo(int num);
int main(){
    int num;
    printf("Enter Range : ");
    scanf("%d",&num);
    return 0;
}
int fibo(int num){
    if (num == 0){
        return 0;
    }
    if (num == 1){
        return 1;
    }
    int nt ,a ,b;
    a = fibo(num-1);
    b = fibo(num-2);
    nt = a+b;
    printf("Fibonacci Sequence is %d",num,nt);
    return nt;
}