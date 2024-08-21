#include<stdio.h>

int main()
{
	int arr[8]={6,7,78,45,65,98,68,48},i,pos,item;
	printf("Enter the item: ");
	scanf("%d",&item);
	
	printf("Enter the index position of the arry you want to update the item(0-7): ");
	scanf("%d",&pos);
	
	printf("The previous array is :");
	for(i=0;i<8;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	arr[pos]=item;
	printf("The New/Updated array is: ");
	for(i=0;i<8;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
