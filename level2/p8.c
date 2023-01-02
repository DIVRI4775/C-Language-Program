#include<stdio.h>
int main()
{
	int s,l,b,tb,th,ps,pr,as,ar,at;
	printf ("enter thr side of the square");
	scanf ("%d",&s);
	printf ("enter thr lenghth of the rectangle");
	scanf ("%d",&l);
	printf ("enter thr breadth of the rectangele");
	scanf ("%d",&b);
    printf ("enter thr height of the triangle");
	scanf ("%d",&th);
	printf ("enter thr base of the triangle");
	scanf ("%d",&tb);
    ps = 4*s;
    pr = 2*(l+b);
    as = s*s;
    ar = l*b;
    at = 0.5*th*tb;
    printf ("perimeter of square=%d\n",ps);
	printf ("perimeter of rectangle=%d\n",pr);
	printf ("area of square=%d\n",as);
	printf ("areaof rectangle=%d\n",ar);
	printf ("area of triangle=%d\n",at);
	return 0;
}
	
	
	
	
	
	
	
	
	
	
