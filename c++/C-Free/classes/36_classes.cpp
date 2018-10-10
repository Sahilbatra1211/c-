// Ambiguity
#include<iostream>
using namespace std;

class M
{
	public:
	
	void show()
	{
		cout<<"sahil";
	}	
};

class N:public M
{
	public:

	void show()
	{
		cout<<"debarshi";
	}	
};

int main()
{
	N obj;
	
	obj.show();
	obj.M::show();
}