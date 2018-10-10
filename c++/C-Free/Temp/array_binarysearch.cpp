//binary search
#include<iostream.h>
#include<conio.h>

int main()
{int a[10],d;

	cout<<"enetr the no";
	for(int i=0;i<=9;i++)
	{
		cin>>a[i];
	}
	cout<<"\n enter the no to find";
	cin>>d;
	int s=0,e=9,m;
	
	m=(s+e)/2;
	
	while(1)
	{ 
		if(a[m]>d)
		{
			s=m;
		
		}
		if(a[m]<d)
		{
			e=m;
		}
		m=(s+e)/2;
		if(a[m]==d)
		{
			cout<<"no found at"<<m+1;
			break;
		}
		if(e<=s)
		{
			cout<<"no not found";
			break;
		}
	}
	
	
}