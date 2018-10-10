#include<iostream>
using namespace std;

int main(){
	
	int ia[5];
	
	for(int i=0;i<5;i++)
	cin>>ia[i];
	
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		{
			if(ia[j]<ia[i])
			{
				int temp=ia[j];
				ia[j]=ia[i];
				ia[i]=temp;
			}
		}
	}
	for(int i=0;i<5;i++)
	cout<<ia[i];

	
}