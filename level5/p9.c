#include<stdio.h>
int main()
{
int n,i,j,k;
	printf("Enter the number of rows in pattern");
	scanf("%d",&n);
	i=n;
	k=0;
	for (i;i>0;i--)
	{
		k=k+1;
		j=i;
		
		for (j;j>0;j--)
		{
		printf("%d",k);
		}
		printf("\n");
	}
	return 0;
}
