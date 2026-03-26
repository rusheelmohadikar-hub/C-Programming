#include<stdio.h>
int sum(int num);
int main(){
     printf("Sum is %d",sum(4));
    return 0;
}
// Recursive Function.
int sum(int num){
    if (num ==1){
        return 1;
    }
    int sumn1,sumn2;
     sumn1 = sum(num-1);//sum of 1 to n.
     sumn2 = sumn1 + num;
     return sumn2;
}
