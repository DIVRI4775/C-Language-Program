#include<stdio.h>
int arear(int x,int y)
{
  int area;
  area=x*y;
  return area;	
}
int main()
{
	int l,b,ar;
	printf("Enter the length and breadth of the rectangle\n");
	scanf("%d%d",&l,&b);
	ar=arear(l,b);
	printf("the area of the rectangle=%d ",ar);
	
	return 0;
}
