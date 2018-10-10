#include<iostream.h>
#include<conio.h>
int t =-1;
const int size = 5;

void display(int x[])
{
	cout<<"\n\n Data :- \n";
	for(int i=0;i<=t;i++)
	{
		cout<<x[i]<<"\n";
	}
}

void push(int x[])
{
	while(1)
	{
		int v;
		cout<<"Enter Data : ";
		cin>>v;
		
		if(t == size-1)
		{
			cout<<"OVERFLOW ERROR";
			getch();
			break;
		}	
		
		t++;
		x[t] = v;
		cout<<"Data pushed \n";
		
	
		char ch;
		cout<<"Do you want to enter more data[y,n] : ";
		cin>>ch;
		if(ch=='n'||ch=='N')
		break;	
	}
}

void pop(int x[])
{
	while(1)
	{
		if(t == -1)
		{
			cout<<"UNDERFLOW ERROR";
			getch();
			break;
		}	
		
		t--;
		cout<<"Data popped "<<x[t+1]<<"\n";
		
	
		char ch;
		cout<<"Do you want to pop more data[y,n] : ";
		cin>>ch;
		if(ch=='n'||ch=='N')
		break;	
	}
	
	
}


int main()
{
	int a[size];
	
	while(1)	
	{
		//clrscr();
		
		int ch;
		cout<<"\nEnter you choice :-\n";
		cout<<"0 - Exit\n";
		cout<<"1 - Push\n";
		cout<<"2 - Pop\n";
		cout<<"3 - Display\n";
		cin>>ch;
		
		
		switch(ch)
		{
			case 0 : exit(0);
				break;
			case 1 : push(a);
				break;
			case 2 : pop(a);
				break;
			case 3 : display(a);
					break;	
		}
	}
}