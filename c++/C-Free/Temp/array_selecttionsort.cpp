//insertion sortt
#include<iostream.h>
#include<conio.h>

int main()
{
	int temp,a[5];
	cout<<"enetr 5 elements";
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	{
		cout<<a[i];
	}
}
