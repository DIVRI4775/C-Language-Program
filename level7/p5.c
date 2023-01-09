#include<stdio.h>
int main()
{
	int i,j,k,n,nn,low,up,mid,r;
	k=0;
	r=0;
	printf("Enter the size of the array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the element to the array\n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i=0;i<n;i++)
	{
		for (j=n;j>=i;j--)
		{
		if(arr[i]>arr[j])
		{
			k=arr[i];
			arr[i]=arr[j];
			arr[j]=k;
		}
		}
	}
	printf("array after sorting\n");
	for (i=0;i<n;i++)
		{
			printf("%d\n",arr[i]);
		}
	printf("enter the number to be searched\n");
	scanf("%d",&nn);
	low=0;
	up=n-1;
	for (i=0;i<n;i++)
	{
		mid=(low+up)/2;
		if(nn>arr[mid])
		{
			low=mid+1;
		}
		else if(nn<arr[mid])
		{
			up=mid-1;
		}
		else if(nn==arr[mid])
		{
			printf("the number is present %d",nn);
			r=r+1;
			break;
		}
	}
	if(r!=1)
	{
		printf(" the entered number is not present");
	}	
return 0;	
}
