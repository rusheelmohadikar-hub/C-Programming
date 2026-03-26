#include<stdio.h>
int add(int a, int b);
int main()
{
    int a,b;
    printf("Enter First Number:");
    scanf("%d",&a);
     printf("Enter Second Number:");
    scanf("%d",&b);
    printf("%d",add(a,b));
    return 0 ;
}
int add(int a, int b){
    return a+b;
}