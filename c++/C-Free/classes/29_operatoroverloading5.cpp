//overloading new and delete operator
#include<iostream>
using namespace std;

class abc
{
	public:
	
	void *operator new(size_t size)
	{
		void *p;
		p=malloc(size);
		
		if(!p)
		{
			bad_alloc ba;
			throw ba;
		}
		return p;
	}
	
	void operator delete(void *p)
	{
		cout<<"deleted";
		free(p);
	}
};

int main()
{
	abc *p1;
	
	try
	{
		p1=new abc();
		cout<<"sahil";
	}
	catch(bad_alloc ba)
	{	cout<<"sahil";
		cout<<"allocated error";
		return 1;
	}
	
	delete p1;
}