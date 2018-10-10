//friend function has no this pointer concept we have to pass both lhs and rhs argument
//=, ( ), [ ], or –> operators can not be
//overloaded using a friend function. 
#include<iostream>
using namespace std;

class ABC
{
	int a;
	
	public:
	ABC()
	{
		a=3;
	}
	void show()
	{
		cout<<a;
	}
	
	ABC friend operator +(ABC,ABC);
};

ABC operator +(ABC obj1,ABC obj2)
{
	ABC obj3;
	obj3.a=obj1.a+obj2.a;
	return obj3;
}

int main()
{
	ABC obj1,obj2,obj3;
	
	obj3=obj1+obj2;
	obj3.show();
}