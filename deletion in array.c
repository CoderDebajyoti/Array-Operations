#include<stdio.h>

int main()
{
    int arr[8] = {78, 98, 56, 65, 33, 99, 44, 88}, i, pos;

    // Display the previous array
    printf("The current array is: ");
    for (i = 0; i < 8; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    // Get position input from user
    printf("Enter the index position of the array that you want to delete the item (0-7): ");
    scanf("%d", &pos);
    
    // Check for valid position input
    if (pos < 0 || pos > 7) 
    {
        printf("Error: Invalid position! Please enter a value between 0 to 7.\n");
        return 1;  // Exit the program with an error code
    }
    
    // Logic for deletion
    // Shift elements to the left to remove the specified element
    for (i = pos; i < 7; i++) 
    {
        arr[i] = arr[i + 1];
    }

    // Optional: Set the last element to 0 or some indicator after shifting
    arr[7] = 0;

    // Display the new array
    printf("The new array is: ");
    for (i = 0; i < 8; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
