//INHERITENCE
/*one class inherit the members of other class so we do not have to create a whole class completely
inheritence follow IS A relationship

//POLYMORPHISM
poly means many and morph means changing.
polymorphism means many forms*/
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
//there are basically two types of polymorphism and those are-
//1.Compile time(overidng -which means at the time of compilation the compiler will override the local function over inherited function
//2.Runtime (overloading-function overloading, constructor overloading) 