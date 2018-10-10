#include<iostream>
using namespace std;

int main()
{
	int ia[5];
	
	for(int i=0;i<5;i++)
	cin>>ia[i];
	
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<5-i;j++)
		{
			if(ia[j+1]<ia[j])
			{
				int temp=ia[j+1];
				ia[j+1]=ia[j];
				ia[j]=temp;
			}
		}
	}
		for(int i=0;i<5;i++)
	cout<<ia[i];
}