//searching in array
#include<stdio.h>
int main(){
	int a[8]={89,56,54,98,54,65,32,16},n,i,flag=0;
	
	printf("Enter the element you want to search : ");
	scanf("%d",&n);
	
	for(i=0;i<8;i++)
	{
		if(n==a[i])
		{
			printf("Yes, the element found\n");
			flag=1;
			printf("The element is %d in the index position of %d in the array\n",n,i);
			break;
		}
	}
	if(flag==0){
		printf("element not found");
	}
	return 0;
}
