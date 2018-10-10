#include<iostream.h>
#include<conio.h>
const int size = 5;

struct Node
{
int info;
Node *next;
}*ptr,*top;


void display()
{
	cout<<"\n\n Data :- \n";
	ptr = top;
	
	while(ptr!=NULL)
	{
		cout<<(ptr->info)<<"\n";
		ptr = ptr->next;
	}
}

void push()
{
	while(1)
	{
		int v;
		cout<<"Enter Data : ";
		cin>>v;
		
	
		
		if(top == NULL)              
		{
			top =new Node;
			top->info=v;
			top->next = NULL;
		}	
		else
		{	ptr  =  new Node;
		    ptr->info= v;
			ptr->next = top;
			top = ptr;
		}
		cout<<"Data pushed \n";
		
	
		char ch;
		cout<<"Do you want to enter more data[y,n] : ";
		cin>>ch;
		if(ch=='n'||ch=='N')
		break;	
	}
}

void pop()
{
	
	
	
	
	while(1)
	{
		if(top == NULL)
		{
			cout<<"UNDERFLOW ERROR";
			getch();
			break;
		}
		
		
		ptr = top;                   
		int temp = ptr->info;
		top=top->next;
		
		delete(ptr);
		
		cout<<"Data popped "<<temp<<"\n";
		
	
		char ch;
		cout<<"Do you want to remove more data[y,n] : ";
		cin>>ch;
		if(ch=='n'||ch=='N')
		break;	
	}
	
	
}


int main()
{
	top = NULL;
	ptr = NULL;	
	
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
			case 1 : push();
				break;
			case 2 : pop();
				break;
			case 3 : display();
					break;	
		}
	}
}