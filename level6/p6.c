#include<stdio.h>
int main()
{
	int n,sum,i,cube;
	sum=0;
	printf("enter the nth number to be sumed as cube\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		cube = i*i*i;
		sum=sum+cube;
	}
printf("the sum of cube of the nth number is %d\n",sum);
	return 0;	
}
