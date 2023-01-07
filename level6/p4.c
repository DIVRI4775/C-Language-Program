#include<stdio.h>
int main()
{
	int n;
		printf("1. for january\n");
		printf("2. for febrary\n");
		printf("3. for march\n");
		printf("4. for april\n");
		printf("5. for may\n");
		printf("6. for june\n");
		printf("7. for july\n");
		printf("8. for august\n");
		printf("9. for september\n");
		printf("10. for october\n");
		printf("11 for november\n");
		printf("12 for december\n");
	printf("enter the choice for the month");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			{
				printf("number of days are 31");
				break;
			}
		case 2:
					{
						printf("number of days are 28");
						break;
					}
		case 3:
					{
						printf("number of days are 31 ");
						break;
					}
		case 4:
					{
						printf("number of days are 30 ");
						break;
					}
		case 5:
					{
						printf("number of days are 31");
						break;
					}
		case 6:
					{
						printf("number of days are 30 ");
						break;
					}
		case 7:
					{
						printf("number of days are 31 ");
						break;
					}
		case 8:
					{
						printf("number of days are 31");
						break;
					}
		case 9:
					{
						printf("number of days are 30");
						break;
					}
		case 10:
					{
						printf("number of days are 31");
						break;
					}
		case 11:
					{
						printf("number of days are 30");
						break;
					}
		case 12:
					{
						printf("number of days are 31");
						break;
					}
	   
		default :
			{
				printf("wrong choice");
			}
	}
	return 0;
}
	
	
	
