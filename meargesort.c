#include <stdio.h>

int main() {
    int arr[5];

    for(int i =0;i<5;i++){
        printf("Enter Element of Index[%d]:",i);
        scanf("%d",&arr[i]);
    }
    
    // Splitting the array into two halves
    int mid = 5 / 2;
    int left[mid];
    int right[5 - mid];
    
    // Copying elements to left and right arrays
    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }
    for (int i = mid; i < 5; i++) {
        right[i - mid] = arr[i];
    }

    // Sorting the left half
    for (int i = 1; i < mid; i++) {
        int key = left[i];
        int j = i - 1;
        while (j >= 0 && left[j] > key) {
            left[j + 1] = left[j];
            j--;
        }
        left[j + 1] = key;
    }

    // Sorting the right half
    for (int i = 1; i < 5 - mid; i++) {
        int key = right[i];
        int j = i - 1;
        while (j >= 0 && right[j] > key) {
            right[j + 1] = right[j];
            j--;
        }
        right[j + 1] = key;
    }

    // Merging the two halves
    int i = 0, j = 0, k = 0;
    while (i < mid && j < 5 - mid) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    // Copying remaining elements
    while (i < mid) {
        arr[k++] = left[i++];
    }
    while (j < 5 - mid) {
        arr[k++] = right[j++];
    }

    // Printing the sorted array
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

