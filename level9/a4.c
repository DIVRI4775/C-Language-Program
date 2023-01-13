#include<stdio.h>
int main()
{
	int n,fibo;
	printf("enter the length of the fibonacci sequence\n");
	scanf("%d",&n);
	fibo=fibbo(n);
	printf("the fibonacci sequence =%d ",fibo);
	return 0;
}
int fibbo(int num)
{
  int i,fib;
  i=0;
  fib=0;
  while (i<=num)
  {
  fib=fib+i;
  i++;
  }
  return fib; 
  }	
