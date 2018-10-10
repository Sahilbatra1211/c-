#include<iostream.h>
#include<conio.h>
int main()
{
	int a[100],b[100],i,x;
	for(i=0;i,i<10;i++)
	{
		cin>>a[i];
	}
	cout<<"enter the no to be searched";
	cin>>x;
	int s=0;
	int e=9;
	int m=(s+e)/2;
	while(1)
	{
		if(x>a[m])
		s=m+1;
		
		if(x<a[m])
		e=m-1;
		
		m=(s+e)/2;
		
		if(x==a[m])
		{
			cout<<"place found"<<m+1;
			break;
		}
		if(s>=m)
		{
			cout<<"value not found";
			break;
		}
	}







}