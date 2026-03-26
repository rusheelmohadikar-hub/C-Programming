#include <stdio.h>

int main() {
    int arr[5] ;
    int i, j, key;
    
    for(int i=0;i<5;i++){
        printf("Enter the Elements of Index[%d]:",i);
        scanf("%d",&arr[i]);
    }

    for (i = 1; i < 5; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }

    // Print the sorted array
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
