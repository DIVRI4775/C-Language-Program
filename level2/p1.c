// WAP TO MAKE BASIC CALCULATOR
#include<stdio.h>
int main()
{
int num1,num2,sum,sub,mul,mod;
float div;
printf("enter two numbers\n");
scanf("%d%d",&num1,&num2);
sum =num1+num2;
sub =num1-num2;
mul =num1*num2;
div =num1/num2;
mod =num1%num2;
printf("the sum =%d\n",sum);
printf("the sub =%d\n",sub);
printf("the mul =%d\n",mul);
printf("the div =%f\n",div);
printf("the mod =%d\n",mod);
return 0;	
}
