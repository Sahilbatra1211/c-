//observe the output of basic recursive program
#include<iostream>
using namespace std;

void recc(int test)
{
	if(test<1)
	return ;
	else
	cout<<test<<" ";
	recc(test-1);
	cout<<test<<" ";
}



int main()
{
	recc(3);
}