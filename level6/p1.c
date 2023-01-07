#include<stdio.h>
int main()
{
	int n;
	printf("enter the weekady number");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			{
				printf("its sunday");
				break;
			}
		case 2:
			{
				printf("its monday");
				break;
			}
		case 3:
			{
				printf("its tuesday");
				break;
			}
		case 4:
			{
				printf("its wednesday");
				break;
			}
		case 5:
			{
				printf("its thrusday");
				break;
			}
		case 6:
			{
				printf("its friday");
				break;
			}
		case 7:
			{
				printf("its saturday");
				break;
			}
		default :
			{
				printf("its wrong choice");
				break;
			}
	}
	return 0;
}
	
	
	
