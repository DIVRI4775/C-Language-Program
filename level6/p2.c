#include<stdio.h>
int main()
{
	int n;
	char ch;
	printf("enter the charcter");
	scanf("%c",&ch);
	printf("1.for checking vowels\n");
	printf("2.for checking consonant\n");
	printf("enter the choice");
	scanf("%d",&n);
	switch (n)
{
	case 1:
		{
			if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u')
			{
				printf("the %c is vowel",ch);
			}
			else
			{
				printf("the %c is not vowel",ch);
			}
			break;
		}
	case 2:
		{
				if(ch=='a'|| ch=='e' || ch=='i'||ch=='o' ||ch=='u')
				{
					printf("the %c is not consonent",ch);
				}
				else 
				{
					printf("the %c is consonent",ch);
				}
				break;
			}
	default :
		{
			printf("enter choice is wrong");
		}
}
return 0;
}
		
			
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
