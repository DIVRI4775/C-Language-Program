#include<stdio.h>
int main()
{
	int r1,r2,c1,c2,sum,i,j,pro1,pro2,k;
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
	if(c1==r2)
	{
	int mat3[r2][c1];
	printf("the product of the matrix is\n");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<=j;k++)
			{
			pro1= mat1[i] [k] * mat2[i] [j] ;
			pro2= mat1[i] [k+1] * mat2[i+1] [j] ;
			sum=sum+pro1+pro2;
			}
			printf("%d ",sum);
			sum=0;		
		}
		
	printf("\n");
	}
	for(i=0;i<r1;i++)
	{
		
	 for(j=0;j<c2;j++)
	   {
	     mat3[i] [j] = 0 ;
	     for(k=0;k<c1;k++)
	       {
            	mat3[i] [j]+=mat1 [ i] [k] * mat2 [k] [j];
	       }
	   }
	}
	printf ("The Resultant matrix mat3 is : \n") ;
	for(i=0;i<r1;i++)
	{
	  for(j=0;j<c2;j++)
	  {
	     printf ("%5d" ,mat3[i] [j]);
	  }
	  printf("\n");
	}
	}
	else 
	{
		printf("the row and column values are not correct\n");
	}	
	return 0;	
}
