#include<iostream.h>
#include<stdio.h>


void stct(char *x,char *y)
{	
	int i=0,l=0;
	while(*(x+i)!='\0')
	i++;
	
	while(*(y+l)!='\0')
	{
	*(x+i)=*(y+l);
	i++;
	l++;
	}
	x[i]='\0';
	puts(x);
}
int main()
{
	char a[10],b[10];
	gets(a);
	gets(b);
	
	stct(a,b);
}