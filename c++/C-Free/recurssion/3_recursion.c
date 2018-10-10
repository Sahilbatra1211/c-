//function to calculate (1+2+3....+x-1+x+y)
#include<iostream>
using namespace std;

int func(int x,int y )
{
	if(x==0)
	return y;
	else
 	return func(x-1,x+y);
}

int main()
{
	int r=func(3,4);
	cout<<r;
	
}