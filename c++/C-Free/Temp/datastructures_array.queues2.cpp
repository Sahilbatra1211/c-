#include<iostream.h>
#include<conio.h>
int f =-1,r=-1;
const int size = 5;

void display(int x[])
{
	cout<<"\n\n Data :- \n";
	for(int i=f;i<=r;i++)
	{
		cout<<x[i]<<"\n";
	}
}

void insert(int x[])
{
	while(1)
	{
		int v;
		cout<<"Enter Data : ";
		cin>>v;
		
		if(r == size-1)
		{
			cout<<"OVERFLOW ERROR";
			getch();
			break;
		}	
		
		if(r==-1 and f==-1)  //first case
		{
			f=0;
			r=0;
		}
		
		else
		{
		r++;
		}
		x[r] = v;
		cout<<"Data Inserted \n";
		
	
		char ch;
		cout<<"Do you want to enter more data[y,n] : ";
		cin>>ch;
		if(ch=='n'||ch=='N')
		break;	
	}
}

void remove(int x[])
{
	while(1)
	{
		if(f == -1 && r==-1)
		{
			cout<<"UNDERFLOW ERROR";
			getch();
			break;
		}	
		
		int temp=x[f];
		
		if(f==r)
		{
			f=-1;
			r=-1;
		}
		else{
		f++;
		}
		cout<<"Data removed "<<temp<<"\n";
		
	
		char ch;
		cout<<"Do you want to remove more data[y,n] : ";
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
		cout<<"1 - Insert\n";
		cout<<"2 - Remove\n";
		cout<<"3 - Display\n";
		cin>>ch;
		
		
		switch(ch)
		{
			case 0 : exit(0);
				break;
			case 1 : insert(a);
				break;
			case 2 : remove(a);
				break;
			case 3 : display(a);
					break;	
		}
	}
}