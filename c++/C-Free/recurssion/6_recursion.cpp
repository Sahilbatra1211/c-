//predict the output of the following program
#include<iostream>
using namespace std;

void func(int x)
{
	if(x>0)
	{
		func(--x);
		cout<<x;
		func(--x);
	}
}
int main()
{
	int a=4;
	func(4);
}