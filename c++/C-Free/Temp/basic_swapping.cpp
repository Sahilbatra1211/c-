// swapiing without use of third variable
#include<iostream.h>
#include<conio.h>

int main()
{
	int a,b;
	cout<<"enter the no to be swapped";
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	
	cout<<"\n"<<a<<b;
	
}