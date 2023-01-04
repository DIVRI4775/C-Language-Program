#include<stdio.h>
#include<math.h>
int main()
{
	float c,p,r,t;
	printf("enter the principal amount, rate of intreset , time duration\n");
	scanf("%f%f%f",&p,&r,&t);
	c=p*(pow((100+r)/100,t));
	printf("the compound intrest =%f\n",c);
return 0;
}
