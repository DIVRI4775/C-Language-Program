#include<stdio.h>
int main()
{
int n,j,sum;
sum=0;
	printf("Enter the number who's digits to be sumed");
	scanf("%d",&n);
	while (n>0)
	{
		j=n%10;
		sum=sum+j;
		n=n/10;
	}	
    printf("the sum of the digit's of the number is%d",sum);
return 0;
}
