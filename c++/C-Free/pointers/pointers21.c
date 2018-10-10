//strcpy function
#include<stdio.h>

void xstrcpy(char *a,char *b)
{
	char *p;
	p=a;
	a=b;
	b=p;
	puts(a);
}
int main()
{

	char d[100],e[100];
	
	gets(d);
	gets(e);
	
	xstrcpy(d,e);	
}