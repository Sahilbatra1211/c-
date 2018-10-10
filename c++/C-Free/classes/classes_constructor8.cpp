#include<iostream.h>
#include<conio.h>

class A{
	int no;
  
  public:
  A(int x)		//whenever parametric const is made without default const it is neccesary to make obj like this only == obj(x)
  {	no=x;
  	cout<<"constructor called -"<<x<<"\n";
  	
  }	
~A()
{
	cout<<"destructor called"<<no<<"\n";  //destructor will run at the end of the the program . used to free memory at the end.
	
}
};
int main()
{
	A obj1(1),obj2(2),obj(3);
getch();}