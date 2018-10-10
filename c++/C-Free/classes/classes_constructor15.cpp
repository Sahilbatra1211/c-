#include<iostream.h>
#include<conio.h>

class A
{
	public:
	A()
	{
		cout<<"class A constructor called\n";
	}
	~A()
	{
		cout<<"class A destructor called\n";
	}
};
class B:public A
{
	public:
	B() 	
	{						
		cout<<"class B constructor called\n";
	}
	~B()
	{
		cout<<"class B destructor called\n";
	}
};
class C:public A
{
	public:
	C()
	{						
		cout<<"class C constructor called\n";
	}
	~C()
	{
		cout<<"class C destructor called\n";
	}
};
class D:public B, public C
{
	public:
	D()
	{
		cout<<"class D constructor called\n";
	}
	~D()
	{
		cout<<"class D destructor called\n";
	}
};



int main()
{
D obj;		
}