//WAP TO FIND LARGEST NUMBER
#include<stdio.h>
int main()
{
    int a,b,c;
printf("Enter the 3 number\n");
scanf("%d%d%d",&a,&b,&c);
if (a>b && a>c)
{
    printf("The largest number is %d",a);
}
else if (b>a && b>c)
{
    printf("The largest number is %d",b);
}
else 
{
    printf(" The largset number is %d",c);
}

return 0;
}
