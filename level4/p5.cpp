#include<stdio.h>
int main()
{
char le;
printf("Enter the character\n");
scanf("%c",&le);
if (le=='a'||le=='e'||le=='i'||le=='o'||le=='u')
{
    printf("The character is vowel");
}
else 
{
    printf("The charcter is consonants");
}
return 0;
}
