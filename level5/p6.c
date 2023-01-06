#include<stdio.h>
int main()
{
int n,i,j;
	printf("Enter the number who's reverse to be find");
	scanf("%d",&n);
	i=n;
	while (n>0)
	{
		j=n%10;
		printf("%d",j);
		n=n/10;
	}	
    printf(" is the reverse of the number %d",i);
return 0;
}
