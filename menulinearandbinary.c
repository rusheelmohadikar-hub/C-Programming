#include<stdio.h>
int main(){
   int key,arry[5],sw;
    for(int i=0;i<5;i++){
        printf("Enter Values of Array at Index[%d]:",i);
        scanf("%d",&arry[i]);
    }
    printf("Enter the Key: ");
    scanf("%d",&key);
    printf("Enter 1 for linear search or 2 for binary search: ");
    scanf("%d",&sw);
   
    //for linear
    int found,index;
   
    //for binary
    int low = 0;
    int high = 4;
    int mid; 
    switch(sw){
         
        case 1: 
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
                    break;     
    
        case 2:
               while (low <= high) {
                     mid = (low + high) / 2;

                   if (arry[mid] == key) {
                       printf("Element is present at index %d\n", mid); 
                       break; // Exit the program as the element is found
                    } 
                   else if (arry[mid] < key) {
                          low = mid + 1;
                    } 
                   else {
                        high = mid - 1;
                    }
                }
                if(arry[mid] != key){
                    printf("Not Found!!!");
                }
                break;   
     }
     return 0;
}