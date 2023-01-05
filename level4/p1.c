//WAP TO PROVIDE GRADES
#include<stdio.h>
int main ()
{
int mark;
printf("Enter the value of marks\n");
scanf("%d",&mark);
if (mark>=80)
{
    printf("The grade is A+");
}
else if (mark<80&&mark>=70)
{
    printf ("The grade is B");
}
else if (mark<70 && mark>=60)
{
    printf("The grade is C");
}
else if (mark<60&&mark>=40)
{
    printf("The grade is D");
}
else 
{
    printf("The grade is F");
}
return 0 ;

}
