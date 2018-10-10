#include<iostream.h>

class integer
{ public:
	int m1;
	int m2;
	
	
	integer()
	{
		m1=0;
		m2=0;
	}
};
int main()
{ int j;
	integer i[3];
	for( j=0;j<2;j++)
	{
		cin>>i[j].m1>>i[j].m2;
	}

	for(j=0;j<3;j++)
	{
		cout<<i[j].m1<<i[j].m2;
	}
}