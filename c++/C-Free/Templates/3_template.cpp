#include<iostream>
using namespace std;

template<class T,class M>

void func(T a,M b)                // now we can send differnet datatypes 
{

}

int main()
{
	int a=7;
	char b='c';
	
	func(a,b);
}