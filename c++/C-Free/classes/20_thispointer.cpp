/* THIS POINTER
Member functions of every object have access to a
special constant pointer named this.
It points to the object itself.
It is passed automatically as an implicit argument to
the invoking member function.

ex-
class ABC
{ 
	int a;
	public:
	void set()
	{ 
		a = 10;
    }
};

class ABC
{ 
	int a;
	public:
	void set()
	{ 
		this.a = 10;
    }
};
*/
#include<iostream>
using namespace std;

class ABC
{	
	private:
	char charray[10];

	public:
	void reveal()
	{ 
		cout << "\nMy object's address is " << this; }
	};


int main()
{
	ABC w1, w2;
	w1.reveal();
	w2.reveal();
	cout << endl;
	return 0;
}
//Static member functions do not have 'this' pointer
//as they can be called without any object using the
//class name.


//Not passed to friend functions as they are not
//member functions of a class.

