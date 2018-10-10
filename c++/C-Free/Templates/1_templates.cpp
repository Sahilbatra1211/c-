//there are two types of templates -
//1)class templates
//2)function templates
//this is example of a class template
#include<iostream>
using namespace std;
template <class T>    				// this line should be just before the class
class data
{
	public:
	
	data(T c)
	{
		cout<<c;
	}
};

int main()
{
	data <char> d1('a');		//myclass<const char *> ob2( "Templates add power.");
	data <int> d2(3);
}