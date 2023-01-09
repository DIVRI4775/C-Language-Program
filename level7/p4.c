#include<stdio.h>
int main()
{
	int n,nn,i,s;
	nn=0;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers in array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the number to be searched\n");
	scanf("%d",&s);
	for (i=0;i<=n;i++)
	{
		if(arr[i]==s)
		{
			printf("the searched number is present %d",arr[i]);
			nn=nn+1;
		}
	}
	if (nn!=1)
	{
		printf("the searched number is not present");
	}
	
return 0;	
}
