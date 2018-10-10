// pointer basic2-> it will overwritte the adress
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int a=10,b=20;
	int *p;
	p=&a;
	(*p)++;
	cout<<a;
	p=&b;
	(*p)++;
	cout<<b;
}