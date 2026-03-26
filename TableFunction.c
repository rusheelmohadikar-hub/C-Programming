#include<stdio.h>
void table(int n);
int main(){
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    table(n);                    //Argument/Actual Parameter 
    return 0;
}
void table(int n){              //Parameter/Formal Parameter
    int mul;
    for(int i=1;i<=10;i++){
        mul = n*i;
        printf("%d x %d = %d\n",n,i,mul);
    }
}