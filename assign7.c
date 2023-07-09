#include <stdio.h>

void bubbleSort(int arr[], int n, int swaps[]) {
    int i, j;
    
    // Initialize swaps array with 0
    for (i = 0; i < n; i++) {
        swaps[i] = 0;
    }
    
    // Bubble Sort
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                
                // Increment swaps count for both indices
                swaps[j]++;
                swaps[j + 1]++;
            }
        }
    }
}

int main() {
    int arr[] = {97, 16, 45, 63, 13, 22, 7, 58, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps[n];
    
    bubbleSort(arr, n, swaps);
    
    printf("Number of swaps needed for each index:\n");
    for (int i = 0; i < n; i++) {
        printf("Index %d: %d swaps\n", i, swaps[i]);
    }
    
    return 0;
}