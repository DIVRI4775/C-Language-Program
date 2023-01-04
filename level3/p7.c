#include<stdio.h>
int main()
{
	float n,sum;
	printf("enter the nth term\n");
	scanf("%f",&n);
	sum=((n*n+1)/2)*((n*n+1)/2)+((n*n+1)/2);
	printf("the sum of series %f ",sum);
	
return 0;
}
