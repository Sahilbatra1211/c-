#include<iostream.h>
#include<conio.h>

class A{				//ENCAPSULATION=wrapping up of related data in a single unit.
	int m1;				
	int m2;          //we have done abstraction that means hiding the unnnesscary data that means user cannot access the private data.
	int m3;
	
	int total;
	int avg;
	int perc;

	public :
	
	A()						//default CONSTRUCTOR= the third element we have cout will show garbage valu if this constructor in not made so to give default value we have made it
	{
		m1=0;
		m2=0;
		m3=0;
		total=0;
		avg=0;
		perc=0;
		cout<<"constructor";			//observe
		
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
getch();} 