#include<iostream.h>
// the example shown here is of multilevel inheritrnce with default const
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

class C:public B
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
int main()
{
	C obj;    //on making a object default const runs automatically
}