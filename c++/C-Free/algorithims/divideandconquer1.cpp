//finding peak of an array using divide and conquer in O(log2n) time
#include<iostream>
using namespace std;

int main()
{
	cout<<"ennter any array";
	int a[10];
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
	
	int s=0;
	int l=9;
	int m;
	
	while(1)
	{	m=(s+l)/2;
		if(a[m]>a[m+1] && a[m]>a[m-1])
		{
			cout<<"peak"<<a[m];
			break;	
		}
		
		else if(a[m+1]>a[m])
		{
			s=m+1;
		}
		
		else if(a[m-1]>a[m])
		{
			l=m-1;
		}
	}
}