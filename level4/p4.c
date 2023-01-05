//WAP TO CHECK POSITVE NEGATIVE & ZERO
#include<stdio.h>
int main()
{
    int x;
    printf ("Enter the number\n");
    scanf("%d",&x);
    if (x<0)
    {
        printf("The number is negative");
    }
    else if (x>0)
    {
        printf("The number is positive");
    }
    else{
    printf("The number is zero");
}
    return 0;
}
