#include<iostream.h>
#include<conio.h>

class A{
	int m1;
	int m2;          //we have done abstraction that means hiding the unnnesscary data that means user cannot access the private data.
	int m3;				// liitin te scope to class only to prevent acciental
	
	int total;
	int avg;
	int perc;

	public :
 
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
 		cout<<m1<<m2<<m3<<total<<perc<<avg;
 	}
	
};
class B : public A                 // ineritence:inerited properties of class A to class B.B will behave same as A.
	{
	
};
int main()
{ A obj[2]; 

for(int i=0;i<2;i++)
	{
   obj[i].getdata();
	obj[i].cal();
	obj[i].putdata();
	}
}