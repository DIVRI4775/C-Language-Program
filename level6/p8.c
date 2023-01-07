#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("The even numbers are :");
	i=n;
	while (i>0)
	{
	   j=i%2;
	   if (j==0)
    	{
	  	printf(" %d ",i);
    	}
    	i--;
	}
return 0;	
}
