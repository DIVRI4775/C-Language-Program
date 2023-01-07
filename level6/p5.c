#include<stdio.h>
int main()
{
	int n,sum,i;
	sum=0;
	printf("enter the nth number to be sumed\n");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		sum=sum+i;
	}
printf("the sum of the nth number is %d\n",sum);
	return 0;	
}
