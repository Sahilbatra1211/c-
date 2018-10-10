//defining functions outside the class
#include<iostream>
using namespace std;
class sahil
{
	
	public:
	int a;
	
	void func();
};

void sahil::func()
{
	a=20;
}

int main()
{
	sahil obj;
	cout<<obj.a<<"\n";
	obj.func();
	cout<<obj.a;
}