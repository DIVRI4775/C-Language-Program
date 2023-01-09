#include<stdio.h>
int main()
{
	int r1,r2,c1,c2,sum,i,j;
	sum=0;
	printf("enter the number of rows and columns in the matrix 1\n");
	scanf("%d%d",&r1,&c1);
	int mat1[r1][c1];
	printf("Enter the elemnts to the matrix 1\n");
	for (i=0;i<r1;i++)
	{
		for (j=0;j<c1;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("the elemnts of the matrix 1 \n");
		for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				printf("%d " ,mat1[i] [j]);
			}
		printf("\n");
		}	
	printf("enter the number of rows and columns in the matrix 2\n");
	scanf("%d%d",&r2,&c2);
	int mat2[r2][c2];
	printf("Enter the elemnts to the matrix 2\n");
	for (i=0;i<r2;i++)
		{
			for (j=0;j<c2;j++)
			{
				scanf("%d",&mat2[i][j]);
			}
		}
	printf("the elemnts of the matrix 2\n");
			for (i=0;i<r2;i++)
			{
				for (j=0;j<c2;j++)
				{
					printf("%d " ,mat2[i] [j]);
				}
			printf("\n");
			}
	printf("\n");
	printf("the sum of the matrix is\n");
	for(i=0;i<r1 & i<r2;i++)
	{
		for(j=0;j<c1 & j<c2;j++)
		{
			sum=mat1[i] [j] + mat2[i] [j];
			printf("%d ",sum);
			
		}
	printf("\n");
	}	
	return 0;	
}
