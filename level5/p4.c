#include<stdio.h>
int main()
{
	int n,i,j,k;
	k=0;
	printf("Enter the number to be checked as prime");
	scanf("%d",&n);
	i=n;
	for (i;i>0;i--)
	{
	   j=n%i;
	   if (j==0)
    	{
	  	k=k+1;
    	}
	}
	if (k>2)
	{
		printf ("The entered number %d is not prime",n);
	}
    else 
    {
		printf("The entered number %d is prime",n);
	}		
return 0;	
}
