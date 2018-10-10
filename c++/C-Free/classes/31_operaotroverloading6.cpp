// () operaotr overloading
#include<iostream>
using namespace std;

class abc
{	int a;
	int b;
	public:
	
	void operator()(int x,int y)
	{
		a=x;
		b=y;	
	}
	void show()
	{
		cout<<a<<"\n"<<b;
	}
};

int main()
{
	abc obj;
	obj(1,2);
	obj.show();
}