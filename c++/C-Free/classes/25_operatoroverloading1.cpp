//operator overloading 
//this is done with normal functions as well as with friend function
//with normal function- the argument before opertor like obj+= in this obj is used to call the function and is passed as this pointer 
// and the argumemnt in rhs is passed as a parameter. so observe the function carefully  

#include<iostream>
using namespace std;

class A
{
	int a;
	public:
	A()
	{
		a=0;
	}	
	void operator +=(int x)
	{
		a=a+x;
	}
	
	A operator +(A obj1)
	{
		A obj;
		obj.a=a+obj1.a;
		return obj;

		
	}

	

	void show()
	{
		cout<<"\n"<<a;
	}



};

int main()
{

	A obj1,obj2,obj3;

	obj1.show();		
	obj1+=4;

	obj3=obj1+obj2;
	
	obj1.show();
	obj3.show();


}

