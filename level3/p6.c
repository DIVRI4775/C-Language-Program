#include<stdio.h>
int main()
{
  float far,cel;
	printf("enter the temperature in farhenhite\n");
	scanf("%f",&far);
	cel=(far-32)*0.519;
	printf("the temprature in celcius  %f\n",cel);

return 0;
}
