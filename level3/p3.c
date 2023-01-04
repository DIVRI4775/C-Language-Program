#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two numbers\n");
	scanf("%d%d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("the numbers after the swapping\n");
	printf("%d\n",a);
	printf("%d\n",b);
return 0;
}
