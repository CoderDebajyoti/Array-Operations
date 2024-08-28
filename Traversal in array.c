#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Initializing an array with 5 elements
    int n = sizeof(arr) / sizeof(arr[0]); // Calculating the number of elements in the array

    printf("Array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); // Accessing each element in the array and printing it
    }

    return 0;
}
