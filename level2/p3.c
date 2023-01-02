#include<stdio.h>
int main()
{
	float gs,bs,hra,da,oa;
	printf("enter the Basic salary");
	scanf("%f",&bs);
	hra=0.16**bs;
	da=0.2*bs;
	oa=3598.00;
	gs=bs+hra+da+oa;
	printf("Gross balance=%f",gs);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
