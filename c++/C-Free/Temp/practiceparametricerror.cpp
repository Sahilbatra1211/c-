#include<iostream.h>

class integer
{
	int m1;
	int m2;
	
	public:
	integer()
	{
		m1=0;
		m2=0;
		
	}
	integer (int x,int y)
	{
		m1=x;
		m2=y;
	}
	void getss()
	{
		cin>>m1>>m2;
	}
	void putss()
	{
		cout<<m1<<"\n"<<m2<<"\n";
	}
};
int main()
{
	integer i(1,2);
	i.putss();
}