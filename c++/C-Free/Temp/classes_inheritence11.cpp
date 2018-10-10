#include<iostream.h>
// this is an example of multi level inheritence with parametric const
class A
{
	public:
	A(int x)			// this is a parametric constructor 
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
	B(int x,int y):A(x) // obj of B can only be made if it send a parameter to A. here y is B's own parameter 
	{
		cout<<"class B constructor called"<<y<<"\n";
	}
	~B()
	{
		cout<<"class B destructor called\n";
	}
	
};

class C:public B
{
	public:
	C(int x, int y,int z):B(x,y) // here is necessay to send two variables to b third variable is its own parameter
	{
		cout<<"class C constructor called"<<z<<"\n";
	}
	~C()
	{
		cout<<"class C destructor called\n";
	}
	
};
int main()
{
	C obj(1,2,3);
}