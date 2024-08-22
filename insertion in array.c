//insertion
#include<stdio.h>

int main()
{
	int arr[8]={78,98,56,65,33,99,44,88},item,i,pos;
	//get input from user
	printf("Enter the item ypu want to insert: ");
	scanf("%d",&item);
	printf("Enter the index positon of the array that you want to insert the item(0-7): ");
	scanf("%d",&pos);
	
	// Check for valid position input
    if (pos < 0 || pos > 7) 
    {
        printf("Error: Invalid position! Please enter a value between 0 to 7.\n");
        return 1;  // Exit the program with an error code
    }
    
    // Display the previous array
    printf("The previous array is: ");
    for (i = 0; i < 8; i++) 
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    //logic
    // Shift elements to the right to make space for the new element
	for (i = 7; i > pos; i--) 
	{
    	arr[i] = arr[i-1];
	}

	// Insert the new element at the specified position
	arr[pos] = item;

    
    // Display the new array
    printf("The new array is: ");
    for (i = 0; i < 8; i++) 
    { 
        printf("%d ", arr[i]);
    }
    printf("\n");
    
	return 0;
}
