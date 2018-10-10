 #include<iostream.h>
// this is an example of multiple inheritence with parametric const
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

class B
{
	public:
	B(int y) 
	{
		cout<<"class B constructor called"<<y<<"\n";
	}
	~B()
	{
		cout<<"class B destructor called\n";
	}
	
};

class C:public A,public B // multiple inheritence
{
	public:
	C(int x, int y,int z):A(x),B(y)
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