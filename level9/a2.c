#include<stdio.h>
int main()
{
	int n,sqr;
	printf("enter the number who's square root to be calculated\n");
	scanf("%d",&n);
	sqr=sq(n);
	printf("the square root of number %d is %d ",n,sqr);
	
	return 0;
}

int sq( int num)
{
  int sqroot,i,pro;
  for (i=0;i<=num;i++)
  {
  	pro=i*i;
  	if(pro==num)
  	{
	  	sqroot=i;
	  	break;
	  }
  	
  }
  return sqroot;	
}
