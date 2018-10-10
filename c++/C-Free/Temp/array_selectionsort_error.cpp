#include<iostream.h>
#include<conio.h>
int main()
{
	int a[5],b,i;
	
	for(i=0;i<=4;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<=3;i++)
	{
		for(int j=i+1;j<=4;j++)
		{
			if(a[i]>a[j]);
			b=a[i];
			a[i]=a[j];
			a[j]=b;
			
		}
	for(i=0;i<=4;i++)
	{
		cout<<a[i];
	}
	}
	
	
	
	
	
}