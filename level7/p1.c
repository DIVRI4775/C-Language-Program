#include<stdio.h>
int main()
{
	int n,i,max;
	max =0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the numbers in array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
	}
	printf("the max number is%d",max);
return 0;	
}
