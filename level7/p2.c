#include<stdio.h>
int main()
{
	int n,i,min,mint;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the numbers in array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	min =arr[0];
	for (i=0;i<n;i++)
	{
		if (arr[i]<min)
		{
			min =arr[i];
		}
	}
	printf("the min number is%d\n",min);
	mint =arr[1];
	for (i=0;i<n;i++)
		{
			if (arr[i]>min&& arr[i]<mint)
			{
				mint =arr[i];
			}
		}
		printf("the second smallest number is%d\n",mint);
	
return 0;	
}
