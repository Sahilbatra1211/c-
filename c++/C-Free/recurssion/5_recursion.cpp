//pattern using recursion
#include<iostream>
using namespace std;

void pattern(int n)
{
	if(n>1)
	pattern(n-1);
	for(int i=0;i<n;i++)
	cout<<"*";
	cout<<"\n";
	
}
int main()
{
	pattern(5);
}