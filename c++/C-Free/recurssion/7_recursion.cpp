//multiplictaion function
#include<iostream>
using namespace std;

int mult(int a,int b)
{
	if(b==0)
	return 0;
	if(b%2==0)
	return mult(a+a,b/2);
	
	return mult(a+a,b/2)+a;
	
}
int main()
{
	int r=mult(4,4);
	cout<<r;
}