#include<stdio.h>
/*int main(){
    int a[5] = {1,2,3,4,5};
    int b[5];
    int *p = a;
    for(int i=0;i<5;i++){
        b[i] = *(p+i);
        printf("%d\n",b[i]);
    }
    return 0;
}
int main(){
    int a[5] = {1,2,3,4,5};
    int *p = a;
    for(int i=0;i<5;i++){
        printf("%d\n",*(p+i));
    }
    return 0;
}
int main(){
    int a;
    int *p = &a;
    printf("Enter Number a : ");
    scanf("%d",&a);
    printf("The Value of Pointer *p is : %d", *p);
    return 0;
}
int main(){
    int a=5,b=6;
    int *p=&a;
    int *q=&b;
    printf("Addition of pointers is %d ",(*p+*q));
    return 0;
}*/
void swap(int *p,int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
int main(){
    int a=5,b=6;
    swap(&a,&b);
    printf("Swaped numbers are %d ,%d",a,b);
    return 0;
}