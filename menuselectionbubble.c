#include<stdio.h>
int main()
{
    int array[5],key,sw;
    for(int i=0;i<5;i++){
        printf("Enter the element of Index[%d]: ",i);
        scanf("%d",&array[i]);
    }
    printf("Enter 1 for Bubble or 2 for Selection sort: ");
    scanf("%d",&sw);
    switch(sw){
        case 1:
               // Bubble Sort
               for (int i = 0; i < 5 - 1; i++) {
                    for (int j = 0; j < 5 - i - 1; j++) {
                        if (array[j] > array[j + 1]) {
                         // Swap arr[j] and arr[j + 1]
                        int temp = array[j];
                        array[j] = array[j + 1];
                        array[j + 1] = temp;
                        }
                    }
                }

                // Print sorted array
                for (int i = 0; i < 5; i++) {
                    printf("%d ", array[i]);
                }
                printf("\n");
                break;
       
        case 2:
               // Selection Sort
               for (int i = 0; i < 5 - 1; i++) {
                   // Assume the current element is the minimum
                   int min_idx = i;

                    // Find the minimum element in the remaining unsorted array
                    for (int j = i + 1; j < 5; j++) {
                        if (array[j] < array[min_idx]) {
                         min_idx = j;
                        }
                    }

                    // Swap the found minimum element with the first element
                    int temp = array[min_idx];
                    array[min_idx] = array[i];
                    array[i] = temp;
                }

                // Print the sorted array
                for (int i = 0; i < 5; i++) {
                    printf("%d ", array[i]);
                }
                break;
            }
    printf("\nRusheel | 49");
        return 0;
}