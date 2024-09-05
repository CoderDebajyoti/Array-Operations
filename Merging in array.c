#include <stdio.h>

void mergeArrays(int arr1[], int arr2[], int n1, int n2, int mergedArr[]) {
    int i = 0, j = 0, k = 0;

    // Traverse both arrays and pick smaller element from each
    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            mergedArr[k++] = arr1[i++];
        } else {
            mergedArr[k++] = arr2[j++];
        }
    }

    // Store remaining elements of arr1
    while (i < n1) {
        mergedArr[k++] = arr1[i++];
    }

    // Store remaining elements of arr2
    while (j < n2) {
        mergedArr[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int mergedArr[n1 + n2];

    mergeArrays(arr1, arr2, n1, n2, mergedArr);

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", mergedArr[i]);
    }

    return 0;
}
