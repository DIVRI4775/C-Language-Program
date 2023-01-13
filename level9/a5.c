#include<stdio.h>
#include<string.h>
int main()
{
	char name[]="C program is best";
	printf("%s\n",name);
	printf("the reverse of the string is\n");
	strev(name);
	return 0;
}
void strev(char str[])
{
	int len;
	len=strlen(str);
	for(len;len>=0;len--)
	{
		putchar(str[len-1]);
	}
}
