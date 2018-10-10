//insertion sort
#include<iostream.h>
#include<conio.h>

int main()
{
	int j,a[10],temp;
	cout<<"enter the no";
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<10;i++)
	{
		temp=a[i];
		
		for(j=i;j>0&&a[j-i]>temp;j--)
		{
			a[j]=a[j-1];
		}
		a[j]=temp;
	}
	for(int i=0;i<10;i++)
	{
		cout<<a[i];
	}
}