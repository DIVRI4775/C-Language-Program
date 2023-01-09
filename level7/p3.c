#include<stdio.h>
int main()
{
	int n,nn,i,p;
	printf("Enter the size of array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the numbers in array \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the desired position\n");
	scanf("%d",&p);
	printf("Enter the number\n");
	scanf("%d",&nn);
	for (i=p;i<=p;i++)
	{
		arr[i-1]=nn;
	}
	printf("array after the manupilation\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
return 0;	
}
