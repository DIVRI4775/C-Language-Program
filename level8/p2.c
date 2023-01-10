#include<stdio.h>
int main()
{
int e;
printf("welcome to the menu driven program\n");
printf("1.Program for factorial\n");
printf("2.program for fibonaaci\n");
printf("enter the program you want to access\n");
scanf("%d",&e);
switch(e)	
{
 case 1:
	{
			int n,i,j,fac;
 	        fac=1;
			printf("Enter the number who's factorial to be calculated");
			scanf("%d",&n);
			for (i=n;i>0;i--)
			{
				fac=fac*i;
			}
			printf("The factorial of %d is =%d", n,fac);		
			break;
		}
	case 2:
	{
			int n,fib,i;
			fib=0;
			i=-1;
			printf("enter the length of the fibonacci sequence\n");
			scanf("%d",&n);
			printf("the fibonacci sequence");
		  while (i<=n)
		  {
		  fib=fib+i;
		  i++;
		  printf("%d ",fib);
		  }
		break;
	}
	default :
		{
			printf("the enter choice is wrong");
		}
}	
return 0;
}
