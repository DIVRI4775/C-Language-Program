	#include<stdio.h>
	int main()
	{
		int n,m,c,sum,diff,pro;
		float div;
		printf("enter the digits\n");
		scanf("%d%d",&n,&m);
		printf("1.for addition \n");
		printf("2.for subtraction\n");
		printf("3.for multiplication\n");
		printf("4.for division\n");
		printf("enter your choice \n");
		scanf("%d",&c);
		switch (c)
	{
		case 1:
			{
			sum=n+m;
			printf("%d+%d=%d",n,m,sum);
			break;	
			}
		case 2:
			{
				diff=n-m;
						printf("%d-%d=%d",n,m,diff);
					break;
				}
		case 3:
					{
						pro=n*m;
								printf("%d*%d=%d",n,m,pro);
							break;
						}
		case 4:
					{
						div= n/m;
								printf("%d/%d=%f",n,m,div);
							break;
						}
		default :
			{
				printf("enter choice is wrong");
			}
	}
	return 0;
	}
			
				
			
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
