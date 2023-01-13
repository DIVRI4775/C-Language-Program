#include<stdio.h>
int main()
{
	int avg,df;
	int ar[]={150,250,340,180,220,270};
	avg=avrg(ar);	
	df=differ(ar);
	printf("the average of the numbers are=%d\n ",avg);
	printf("the difference between the max and min number is=%d\n ",df);
	return 0;
}
int avrg(int arr[])
{
  int sum,i;
  float avreg;
  sum=0;
  for(i=0;i<6;i++)
  {
  sum=sum+arr[i];
  }
  avreg=sum/6;
  return avreg;	
}
int differ(int arr[])
{
	int max,min,dif,i;
	max=0;
	min=0;
	for (i=5;i>=0;i--)
	{
		if (arr[i]<arr[i-1])
		{
			min=arr[i];
		}
		else if (arr[i]>max)
		{
			max=arr[i];
		}		
	}
dif=max-min;
return dif;
	
}
