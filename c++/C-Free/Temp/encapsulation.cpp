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

int main()
{ A obj[2]; 

for(int i=0;i<2;i++)
	{
   obj[i].getdata();
	obj[i].cal();
	obj[i].putdata();
	}
}