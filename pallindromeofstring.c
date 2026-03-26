#include<stdio.h>
int main(){
    int a[5] = {1,2,3,4,5};
    int b[5];
    int *p = &a;
    for(int i=0;i<5;i++){
        b[i] = *p+i;
        printf("%d\n",b[i]);
    }
    return 0;
}