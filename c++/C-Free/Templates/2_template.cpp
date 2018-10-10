#include<iostream>
using namespace std;

template <class T>

T func(T a,T b)                // a and b cannot be of diif data type at the same time.they can be of any data type but it should be same for both
{
	if(a>b)
	return a;
	else 
	return b;
}

int main()
{
	int a=5,b=6,c;
	c=func(a,b);
	cout<<"\n"<<c;
	float x=8.9,z=10.6,e;
	e=func(x,z);
	cout<<"\n"<<e;
}