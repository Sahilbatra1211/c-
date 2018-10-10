// an array is given in which all the elements occur in pair of two except one element and we have to find that one unique element
// ex- int a[5];
// 1 2 2 1 3  are the elements in the array so to find that unique elment the ssimplest method is to take xor of all thhe elments
// the same elemts will give a xor ==0 so after doing xor of all the elements the final ressult that we will get is the unique elment
#include<iostream>
using namespace std;

int unique(int x[])
{	int result=0;
	for(int i=0;i<5;i++)
	{
		result^=x[i];
	}
	
	return result;
}

int main()
{
	int a[5];
	
	for(int i=0;i<5;i++)
	{cin>>a[i];
	
	}
	int ans=unique(a);
	
	cout<<"uniqque element is "<<ans;
}
