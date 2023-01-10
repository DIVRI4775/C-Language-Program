#include<stdio.h>
int main()
{
	int n,a,k;
	printf("Enter the number to be checked as perfect between 1 to 50\n");
	scanf("%d",&n);
	k=n;
	a= per(n);
    if (a==k)
    {
		printf("YES %d is perfect number ",k);
	}
	else
	{
    	printf("NO %d is not perfect number",k); 
	}
	return 0;
}
int per(int nn)
{
  	int i,sum;
  	sum=0;
  	for (i=1;i<nn;i++)
  		{
  			if(nn%i==0)
  				{
  					sum=sum+i;
  				}	
  		}	
  	return sum;
}
