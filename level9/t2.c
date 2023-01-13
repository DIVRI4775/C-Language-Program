#include<stdio.h>
#include<math.h>
int main ()
{
				int n,i,k,sum;
							sum=0;
								printf("Enter the number to be checked as perfect");
								scanf("%d",&n);
								k=n;
								for (i=1;i<n;i++)
								{
									if(n%i==0)
									{
										sum=sum+i;
									}	
								}	
								if (sum==k)
								{
								printf("YES %d is perfect number ",k);
								}
								else
								{
								printf("NO %d is not perfect number",k);
								}
			
return 0;
}
