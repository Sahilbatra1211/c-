#include <iostream.h>
class A{
	int m1;
	int m2;
	int m3;
	int total;
	int avg;
	public:
	A()
	{
	m1=0;
	m2=0;
	m3=0;
	total=0;
	avg=0;
	}
	void getdata()
	{cin>>m1>>m2>>m3;
		
	}
	void cal()
	{
		total=m1+m2+m3;
		avg=(m1+m2+m3)/3;
	}
	void putdata()
	{
	 cout<<m1<<m2<<m3;
	}
	
};
int main()
{ int i;
A obj[2];
for( i=0;i<1;i++)
{	cout<<"enter marks of three sub  ject"<<i+1;
	obj[i].getdata();
	obj[i].cal();
}
for(i=0;i<2;i++)
{cout<<"result"<<i+1;
	obj[i].putdata();
}
}





