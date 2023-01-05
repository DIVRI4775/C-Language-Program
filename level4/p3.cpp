#include<stdio.h>
int main()
{
int y;
float x;
printf ("Enter the year\n");
scanf ("%d",&y);
x=y%4;
if(x==0)
{
    printf("The givem year is a Leap Year");
}
else 
{
    printf("The given year is not leap year");
}
return 0;
}
