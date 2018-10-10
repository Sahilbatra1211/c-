// ponter basic 3-> dynamic memory allocation and this pointer can be used as normal variable (*p)==a as we can assign value at runttime
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int *p;
	
	p=new int;  // is ptr me ek khali variable ka adress dala gya h
	
	cin>>*p;   // *p=5
	cout<<*p;
	
}