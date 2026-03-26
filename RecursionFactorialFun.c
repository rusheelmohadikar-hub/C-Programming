/*#include<stdio.h>
int fact(int num);
int main()
{
    int num;
    printf("Enter a Number : ");
    scanf("%d",&num);
    printf("Factorial of %d is %d",num ,fact(num));
    return 0;
}
int fact(int num){
    int factnm1,factn;
    if(num == 1){
        return 1;
    }
    else if (num == 0){
        printf("Factorial of 0 is 1");
    }
    else{
        factnm1 = fact(num-1);
        factn = factnm1*num;
    return factn;
    }
}*/

#include<stdio.h>
int fact(int n);
int main() 
{
 int n;
 printf("Enter a positive integer: ");
 scanf("%d",&n);
 printf("Factorial of %d = %ld", n, fact(n));
 return 0;
}
int fact(int n) {
 if (n==1){ // base case
 return 1;
 }
 else{
 return n*fact(n-1); // recursive case
 }
}