// overloading uranary operator -
//// default arguments are not allowed in operator overloading 
// ex- obj+=4;
// void operator +=(int a=4) this is not allowed 
//*, ., ::, ?: are operators can not be overloaded
#include<iostream>
using namespace std;

class sahil
{
	int a;

	public:
	sahil()
	{
		a=6;	
	}

	void operator -()
	{
		a=-a;
	}
	void operator ++()
	{
		a++;
	}
	void show()
	{
		cout<<a<<"\n";
		
	}
	void operator !()
	{
		a=!a;
	}
};
int main()
{
	sahil obj;
	obj.show();
	-obj;							// (obj.operator)-
	obj.show();                                   
	++obj;							// obj.operator++
	obj.show();
	!obj;
	obj.show();
}
