2#include<stdio.h>
int main()
{
	int r1,c1,sum,i,j;
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
	printf("sum of dioganal elements is \n");
    for (i=0;i<r1;i++)
		{
			for (j=0;j<c1;j++)
			{
				if(i==j)
				{
					sum =sum +mat1[i][j];
					printf("%d ",sum);
				}
				
			}
			printf("\n");
		}
return 0;	
}
