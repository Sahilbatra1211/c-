//only publiic members can be accessed by object
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
	
};

int main()
{ A obj; 
	
   cin>>obj.m1;
   cin>>obj.m2;
   cin>>obj.m3;
	obj.total= obj.m1+obj.m2+obj.m3;
	obj.avg=obj.total/3;
	obj.perc=obj.total/300*100;
		   
   
   	
   cout<<obj.m3;      //
   cout<<obj.m2;
   cout<<obj.m1 ;           // A==int
	cout<<obj.total;        // obj==variable
	cout<<obj.avg;
	cout<<obj.perc;				
   
}