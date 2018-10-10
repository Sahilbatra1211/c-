//bubble sortt
#include<iostream.h>
#include<conio.h>

int main()
{
	cout<<"enter the no's";
	int temp,a[5];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
	
}