//pointers basic
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int a=5;
	int *p;
	p=&a;
	
	cout<<p<<"\n"<<*p<<"\n"<<&p<<"\n";
	
	cout<<a<<"\n"<<&a;
	*p=10;
	cout<<*p<<"\n"<<a;
	
}