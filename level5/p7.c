#include<stdio.h>
int main()
{
int n,i,j;
i=1;
	printf("Enter the number of rows in pattern ");
	scanf("%d",&n);
	for (i;i<=n;i++)
	{
		j=1;
		for (j;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
	return 0;
}
