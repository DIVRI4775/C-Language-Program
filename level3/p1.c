#include<stdio.h>
int main()
{
	int n1,n2,n3,n4,n5,sum;
	float avg,per;
	printf("enter the five numbers\n");
	scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
	sum =n1+n2+n3+n4+n5;
	avg=float(sum)/5;
	per=(sum*100)/5;
	printf("the average of numbers =%f\n",avg);
	printf("the percentage of numbers =%f\n",per);
return 0;
}
