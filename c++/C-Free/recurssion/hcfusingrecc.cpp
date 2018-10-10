//hcf of two nos 
#include<iostream>
using namespace std;

int recurssion(int a,int b)
{
	if(b!=0)
	return recurssion(b,a%b);
	else
	 return(a);
	 
	
	
}

int main()
{	int a,b;
	cin>>a;
	cin>>b;
	int r=recurssion(a,b);
	cout<<r;
}