//FRIEND FUNCTION
/*
->A function that can access the private and
  protected members of a class to which it is a friend.
->It is not in the scope of a class to which it is a friend.
->It cannot be called using the object of a class to
  which it is a friend.
->Invoked like a normal function.
->Has to be declared either in the public or the
  private section within a class (to which it is a friend)
  preceded with a keyword friend.i
*/
#include<iostream>
using namespace std;

class ABC
{
	int a,b;
	public:
	
	void set(int w,int e);
	
	int  friend sum(ABC x);
};

void ABC::set(int w,int e)
{
	a=w;
	b=e;
}

int sum(ABC x)
{
	return x.a+x.b;	
}
int main()
{
	ABC obj;
	
	obj.set(2,3);
	
	cout<<sum(obj);
}