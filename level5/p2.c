#include<stdio.h>
int main()
{
int n,i,j,count,w,mul,sum,t,c;
count =0;
mul=1;
sum=0;
	printf("Enter the number to be checked as palindrome \n");
	scanf("%d",&n);
	i=n;
	c=n;
	
	do{
		n=n/10;
		count++;
	  }while(n>0);
	w=0;
	for (w;w<count-1;w++)
	{
		mul=mul*10;
	}		
	while (c>0)
	{
		j=c%10;
		t=j*mul;
		sum=sum+t;
		mul=mul/10;
	    printf("%d",j);
		c=c/10;
	}	
	if (i==sum)
	{
		printf("The number %d is palindrome number",i);
	}
	else 
	{
		printf("The number %d  is not palindrome number",i);
	}
	return 0;
}
