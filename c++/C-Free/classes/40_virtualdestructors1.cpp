//why do we need virtual destructors
#include<iostream>
using namespace std;

class A
{
	public:
	virtual void fun()
	{
		cout<<"base class";
	}
	~A()
	{
		cout<<"A class des";
	}
};

class B:public A
{	
public:
	virtual void fun()
	{
		cout<<"base class";
	}
	~B()
	{
		cout<<"B class destructor";
	}
}
int main()
{
	A *b1=new A();
	B *b2=new B();
	
	b1->fun();					// it will call func of A
	b2->fun();					// it will call func of B
}