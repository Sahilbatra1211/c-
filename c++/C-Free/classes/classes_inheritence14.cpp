#include<iostream.h>
// this is example of hybrid inheritence with parametric const
class A
{
	public:
	A(int x) 		
	{
		cout<<"class A constructor called-"<<x<<"\n";
	}
	~A()
	{
		cout<<"class A destructor called\n";
	}
	
};

class B:public A
{
	public:
	B(int x,int y):A(x) 
	{
		cout<<"class B constructor called"<<y<<"\n";
	}
	~B()
	{
		cout<<"class B destructor called\n";
	}
	
};

class C:public A
{
	public:
	C(int x, int y):A(x)
	{
		cout<<"class C constructor called"<<y<<"\n";
	}
	~C()
	{
		cout<<"class C destructor called\n";
	}
	
};
class D:public B,public C
{
	public:
	D(int x,int y,int z,int o):B(x,y),C(x,z)
	{
		cout<<"class D constructor called"<<o<<"\n";
	}
	~D()
	{
		cout<<"class D destructor called\n";
	}
};
int main()
{
	D obj(1,2,3,4);
}