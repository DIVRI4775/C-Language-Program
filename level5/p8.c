#include<stdio.h>
int main()
{
int n,i,j;
	printf("Enter the number of rows in pattern");
	scanf("%d",&n);
	i=n;
	for (i;i>0;i--)
	{
		j=i;
		for (j;j>0;j--)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
