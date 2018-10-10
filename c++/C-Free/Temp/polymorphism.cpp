#include<iostream.h>

void func()
{
	cout<<"ail\n";                 //capability of one thing to perform in different ways is known as polymorphism
}
void func(int x)				//ex function overloading, constructor overloading
{
	cout<<"2ail\n";
}
void func(int x,int y)
{
	cout<<"3ail\n";
}
void func(float x, float y)
{
	cout<<"4ail\n";
}
int main()
{
	func();
	func(1);
	func(1,1);
	float a=1.1,b=1.2;
	func(a,b);
}