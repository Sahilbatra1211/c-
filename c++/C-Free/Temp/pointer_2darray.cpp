#include<iostream.h>
#include<iostream.h>
int main()
{int i,j;
	int *p=new int[3*3];
	for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>p[(i*3)+j];
			
		}
	}
		for(i=0; i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<p[(i*3)+j];
			
		}
	
cout<<'\n';	
	}
	
}