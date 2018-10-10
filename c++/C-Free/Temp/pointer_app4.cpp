//difference between gets and ciin is that cin will print only a word while gets will print whole line 
#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
int main()
{
	char *p;
	
	p=new char;
	
	gets(p);
	cout<<"\n"<<p;
	puts(p);
}