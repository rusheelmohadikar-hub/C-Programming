#include <stdio.h>
int main() {
    int arr[5],key;

    int low = 0;
    int high = 4;
    int mid;

    for(int i = 0;i<5;i++){
      printf("Enter Elements of Index[%d]:",i);
      scanf("%d",&arr[i]);
    }
    printf("Enter the key to search: ");
    scanf("%d",&key);

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == key) {
            printf("Element is present at index %d\n", mid); 
            break; // Exit the program as the element is found
        } 
        else if (arr[mid] < key) {
            low = mid + 1;
        } 
        else {
            high = mid - 1;
        }
    }
     if(arr[mid] != key){
        printf("Not Found!!!");
      }   
   return 0;
}
