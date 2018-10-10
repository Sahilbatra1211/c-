//hcf of two  nos 
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"enter two nos a>b";
	cin>>a>>b;
	
	int r=a%b;
	
	while(r!=0)
	{
		a=b;
		b=r;
		r=a%b;
	}
	cout<<"hcf is \n"<<b;

	return(0);	
	

}

                                                   