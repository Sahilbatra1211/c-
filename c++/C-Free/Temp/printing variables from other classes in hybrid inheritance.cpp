#include<iostream.h>
#include<conio.h>

class A
{
	public:
	int a;
	A(int x)
	{	a=x;
		cout<<"class A constructor called - "<<x<<"\n";
	}
	~A()
	{
		cout<<"class A destructor called\n";
	}
};
class B:public A
{
	public:
	B(int x, int y):A(x) 	
	{ a=y;						
		cout<<"class B constructor called - "<<y<<"\n";
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
	{	a=y;					
		cout<<"class C constructor called - "<<y<<"\n";
	}
	~C()
	{
		cout<<"class C destructor called\n";
	}
};
class D:public B, public C
{
	public:
	int d;
	D(int x, int y,int z,int o ):B(x,y),C(x,z)
	{	d=o;
		cout<<"class D constructor called - "<<o<<"\n";
		//cout<<"A - "<<a<<"\n";		//ambibious=a aise print nh hoga bcz isme ye confuse ho jaega ki kiske value lu 
		cout<<"B.a ="<<B::a<<"\n";		//way of printing a through scope resolution
	cout<<"C.a ="<<C::a<<"\n";
	
	}
	
	~D()
	{
		cout<<"class D destructor called\n";
	}
	
};



int main()
{
D obj(1,2,3,4);
cout<<obj.B::a;	
cout<<obj.C::a;
		
}