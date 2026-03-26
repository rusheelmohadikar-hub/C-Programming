#include<stdio.h>
int main(){
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    int count = 0;
    for(int i=2;i<=num;i++){
        if(num%i == 0){
            count += 1;
        }
    }
    if(count == 1){
        printf("Its a Prime Number");
    }
    else{
        printf("Not a Prime Number");
    }
    return 0;
}