#include<iostream.h>
#include<conio.h>

class A{
	public :
	int m1;
	int m2;
	int m3;
	
	int total;
	int avg;
	int perc;
 
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
	 void puts()
	 {
 		cout<<m1<<m2<<m3<<total<<avg<<perc;
 	}
	
};

int main()
{ A obj[2]; 

for(int i=0;i<2;i++)
	{
   	obj[i].getdata();
	obj[i].cal();
	obj[i].puts();
		}
}