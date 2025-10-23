#include<stdio.h>
int main ()
{
	int arr[100],n,i,j,temp;
	printf("enter the number of elements in the array");
	scanf("%d",&n);
	if (i=0||n>100)
	{
		printf("invalid number of elements .please enter a value between 1 to 100.\n");
		return 1;
	}
	printf("enter %d integer:\n",n);
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n-1;i++)
	{
		for (j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("stored array in assending order :\n");
	for (i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
	
}
