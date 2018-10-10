#include<stdio.h>
int main()
{
	char n;
	printf("enter the character");
	scanf("%c",&n);
	
	if(n>='A'&& n<='Z')
	{
		printf("the no is capital alphabet");
	}
	else if(n>='a' && n<='z')
		printf("the no is small alphabet");
	else if(n>=48 && n<=57)
		printf("the no is  digit");
	else 
		printf("the no is special digit");
	
}