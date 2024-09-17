#include <stdio.h>

void splitArray(int arr[], int size, int firstHalf[], int secondHalf[]) {
    int mid = size / 2;
    
    // Fill the first half array
    for (int i = 0; i < mid; i++) {
        firstHalf[i] = arr[i];
    }
    
    // Fill the second half array
    for (int i = mid; i < size; i++) {
        secondHalf[i - mid] = arr[i];
    }
}

int main() {
    int size;
    
    // Input array size
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int arr[size], firstHalf[size / 2], secondHalf[size - size / 2];
    
    // Input elements into the array
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the splitArray function
    splitArray(arr, size, firstHalf, secondHalf);
    
    // Output the first half of the array
    printf("First half of the array:\n");
    for (int i = 0; i < size / 2; i++) {
        printf("%d ", firstHalf[i]);
    }
    
    printf("\nSecond half of the array:\n");
    for (int i = 0; i < size - size / 2; i++) {
        printf("%d ", secondHalf[i]);
    }
    
    return 0;
}
