#include <stdio.h>

int main() {
    int arr[8] = {6, 7, 78, 45, 65, 98, 68, 48}, i, pos, item;

    // Input the item to update
    printf("Enter the item: ");
    scanf("%d", &item);

    // Input the position where the item will be updated
    printf("Enter the index position of the array you want to update the item (0-7): ");
    scanf("%d", &pos);

    // Check for valid position input
    if (pos < 0 || pos > 7) {
        printf("Error: Invalid position! Please enter a value between 0 to 7.\n");
        return 1;  // Exit the program with an error code
    }

    // Display the previous array
    printf("The previous array is: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Update the array at the specified position
    arr[pos] = item;

    // Display the updated array
    printf("The New/Updated array is: ");
    for (i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
