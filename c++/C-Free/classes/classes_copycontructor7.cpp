#include<iostream.h>
#include<conio.h>

class A{		
	int m1;   //if we are using these variables inside functions in class the no need to make them priavte.				
	int m2;         
	int m3;
	
	int total;
	int avg;
	int perc;
	int y;
	public :
	
	A()						//CONSTRUCTOR= the third element we have cout will show garbage valu if this constructor in not made so to give default value we have made it
	{
		m1=0;
		m2=0;
		m3=0;
		total=0;
		avg=0;
		perc=0;
		cout<<"constructor";			//observe
		
	}
		A(int x)						//parametric cons
	{
		m1=x;
		m2=x;
		m3=x;
		total=x;
		avg=x;
		perc=x;
		cout<<"constructor";			//observe
		
	}
			A(A &y)						//this is a copy constructor.
	{
		m1=y.m1;
		m2=y.m2;
		m3=y.m3;
		total=y.total;
		avg=y.avg;
		perc=y.perc;
		
	}
	

 
 	void getdata()
	 {
 		cin>>m1>>m2>>m3;
 	}
 	void cal()
 	{
	 	total= m1+m2+m3;
	 	avg=total/3;
	 	perc=total/300*100;
	 }
	 void putdata()
	 {
 		cout<<m1<<"\n"<<m2<<"\n"<<m3<<"\n"<<total<<"\n"<<perc<<"\n"<<avg<<"\n";
 	}
	
};

int main()
{ A obj[3]; 

for(int i=0;i<2;i++)			//"loop 2 baari chalaya h"
	{
   obj[i].getdata();
	obj[i].cal();
	
	}
	for (int i=0;i<3;i++)     //"loop 3 times"
{   cout<<"\n\n student"<<i+1<<"\n";
	obj[i].putdata();
}
A o(5);
o.putdata();

A o2(o);					// we have copied the values of object o in object o2 
o2.putdata();
}