#include<iostream>
using namespace std;
class A
{
	public:
	virtual	void f1()       // yaha virtual likhte hi late binding hogi
	{
		
	}
};
class B:public A
{
	public:
	void f1()					//overriding 
	{
		
	}
};
int main()
{
	A *p,o1;
	B o2;
	p=&o2;                    //pointer base class can only contain of its child class
	p->f1();					// ye A class k function ko call krega
								//overriding is also early binding 
								// and because of early binding only f1 of base class chl ra h but we want ki
								// child class ka chale
								//compile time pr pata hi ni lgta ki pointer k andar kya h to isliye base class
								// ka chl jata h jbki hum chate te ki child class ka chale
}