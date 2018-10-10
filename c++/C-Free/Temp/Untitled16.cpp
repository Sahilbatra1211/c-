#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j==1)
			{
				for(k=4-i;k>1;k--)
				{
					cout<<"\t";
				}
				cout<<"1"<<"\t";
				
			}
			else if(j==i)
			{
							cout<<"1"<<"\t";	
			}
			else{
				
				cout<<i-1<<"\t";
			}
		}
		cout<<"\n";
	}
}