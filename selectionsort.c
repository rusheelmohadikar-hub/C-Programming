#include <stdio.h>

int main() {
    int arr[5];
    int i, j, minindex, temp;

    for(int i=0;i<5;i++){
        printf("Enter the Element of Index[%d]:",i);
        scanf("%d",&arr[i]);
    }

    for (i = 0; i < 5-1; i++) {
        minindex = i;

        for (j = i + 1; j < 5; j++) {
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }

        temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
