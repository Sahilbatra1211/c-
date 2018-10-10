#include<iostream.h>
#include<conio.h>

struct A{
	public :
	int m1;
	int m2;
	int m3;
	
	int total;
	int avg;
	int perc;
	
};

int main()
{ A obj[2]; 

for(int i=0;i<2;i++)
	{
   cin>>obj[i].m1;
   cin>>obj[i].m2;
   cin>>obj[i].m3;
	obj[i].total= obj[i].m1+obj[i].m2+obj[i].m3;
	obj[i].avg=obj[i].total/3;
	obj[i].perc=obj[i].total/300*100;
	}
for(int i=0;i<2;i++)	   
   {
   	cout<<"student"<<i+1<<"\n";
   cout<<obj[i].m3<<"\n";
   cout<<obj[i].m2<<"\n";
   cout<<obj[i].m1<<"\n" ;           
	cout<<obj[i].total<<"\n";        
	cout<<obj[i].avg<<"\n";
	cout<<obj[i].perc<<"\n";				
   }
}