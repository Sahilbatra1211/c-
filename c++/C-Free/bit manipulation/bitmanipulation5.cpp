//to check  if the no has alternate bits or not
#include<iostream>
using namespace std;

int main()
{
	int x;
	cin>>x;
	
	int y=x^(x>>1);
	
	if((y&(y+1))==0)
	cout<<"alternate";
	else
	cout<<"not alternate";
	
	
}
