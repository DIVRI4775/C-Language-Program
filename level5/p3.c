#include<stdio.h>
int main()
{
int n,i,j,k,sum;
sum=0;
	printf("Enter the number to be checked as armstrong ");
	scanf("%d",&n);
	i=n;
	while (n>0)
	{
		j=n%10;
		k=j*j*j;
		sum=sum+k;
		n=n/10;
		
	}	
	if (i==sum)
	{
	printf("YES %d is armstrong number ",i);
	}
	else
	{
	printf("NO %d is not armstrong number",i);
	}
	return 0;
}
