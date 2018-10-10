#include<iostream>
using namespace std;

int main()
{
	int a[5];
	
	for(int i=0;i<5;i++)
	cin>>a[i];
	
	int flag,j;
	
	for(int i=1;i<5;i++)
	{	
		flag=a[i];
		for(j=i-1;j!=-1 && a[j]>flag;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=flag;
		
		
	}
	
	for(int i=0;i<5;i++)
	cout<<a[i];
}