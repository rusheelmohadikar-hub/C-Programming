#include<stdio.h>
int main(){
    int key,arry[5],found = 0,index;
    for(int i=0;i<5;i++){
        printf("Enter Values of Array at Index[%d]:",i);
        scanf("%d",&arry[i]);
    }
    printf("Enter the Key: ");
    scanf("%d",&key);
    for(int i=0;i<5;i++){
        int value = arry[i];
        if(key == value){
            found = 1;
            index = i;
        break;
        }
    }
    if(found == 1){
        printf("Found at Index = %d",index);
    }
    else{
        printf("Not Found");
    }
    return 0;
}