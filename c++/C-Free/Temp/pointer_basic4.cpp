/*basic 4-> pointers are array because if we cout array or coutt apointer there adress is shown which means they
 are same. although array are stattic pointers because we cannot do a++ in array altthough we can do this in a
  pointer. that is address shift*/
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

int main()
{
	int size;
	cin>>size;
	
	int *p;
	
	p=new int[size];
	
	//now p[i] can be used just like apointer
	
	for(int i=0;i<size; i++)
	{
		cin>>p[i];
		
	}
	for(int i=0;i<size; i++)
	{
		cout<<p[i];
		
	}
	/*we can also do this
	for(int i=0;i<size;i++)
	{ cout<<*p;
      p++;
	}
	*/
	
	}   