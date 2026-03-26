#include<stdio.h>
int main(){
    int num= 1234,rev =0,rem=0;
    while(num>0){
        rem = num%10;
        num /= 10;
        rev = (rev*10)+rem;
    }
    printf("Reverse of Number:%d",rev);
    return 0;
}