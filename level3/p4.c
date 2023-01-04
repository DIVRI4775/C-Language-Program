#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the two numbers\n");
	scanf("%d%d",&a,&b);
	a=a-b;
	b=a+b;
	a=b-a;
	printf("the numbers after the swapping\n");
	printf("%d\n",a);
	printf("%d\n",b);
return 0;
}
