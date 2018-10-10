//bit manipulation 1
//xor of no's upto n
// ex- xor of 1^2^3^4^5^6=6+1=7

#include<iostream>
using namespace std;

int xorn(int n)
{
	if(n%4==0)
	return n;
	
	if(n%4==1)
	return 1;
	
	if(n%4==2)
	return n+1;
	
	if(n%4==3)
	return 0;
	
}

int main()
{
	int n;
	cin>>n;
	
	cout<<"xor  will be: "<<xorn;
}
