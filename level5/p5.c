#include<stdio.h>
int main()
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
return 0;	
}
