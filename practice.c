#include<stdio.h>
int main(){
  int array[5],found = 0 ,index,sw,key;
  int low = 0,mid,high = 4;
  for(int i=0;i<5;i++){
    printf("Enter Element of Index[%d]: ",i);
    scanf("%d",&array[i]);
  }
  printf("Enter Key to find: ");
  scanf("%d",&key);
  printf("Enter 1.Linear search,2.Binary search: ");
  scanf("%d",&sw);
  switch(sw){
       case 1:
              for(int i=0;i<5;i++){
                if(key == array[i]){
                  found = 1;
                  index = i;
                }
              }
              if(found = 1){
                printf("Found at Index %d",index);
              }
              else{
                printf("Not Found");
              }
              break; 
      case 2:
            for(int i=0;i<5;i++){
              mid = (low+high)/2;
              if (key>array[mid]){
                low = mid+1;
              }
              else if(key<array[mid]){
                high = mid-1;
              }
              else if(key == array[mid]){
                found = 1;
                index = mid;
              }
            }
              if(found = 1){
                printf("Found at Index %d",index);
              }
              else{
                printf("Not Found");
              }
            break;
                         
  }
  return 0;
}
