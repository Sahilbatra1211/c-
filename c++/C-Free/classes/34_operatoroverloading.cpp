//overloading -> operator
#include<iostream>
using namespace std;

class abc
{
	public:
	int a;
	
	void operator =(int x)
	{
		a=x;
	}
	
	abc* operator ->()
	{
		
		return this;
	}
	void show()
	{
		cout<<"\n"<<a;
	}
};

int main()
{
abc obj;
obj=4;
obj.show();
obj=6;;
obj.show();	
}