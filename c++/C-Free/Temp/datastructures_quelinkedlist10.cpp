#include<iostream.h>
#include<conio.h>
const int size = 5;

struct Node
{
int info;
Node *next;
}*ptr,*front,*rear;


void display()
{
	cout<<"\n\n Data :- \n";
	ptr = front;
	
	while(ptr!=NULL)
	{
		cout<<(ptr->info)<<"\n";
		ptr = ptr->next;
	}
}

void insert()
{
	while(1)
	{
		int v;
		cout<<"Enter Data : ";
		cin>>v;
		
		ptr  =  new Node;
		ptr->info= v;
		
		if(front == NULL)
		{
			front = ptr;
			front->next = NULL;
			rear = front;
		}	
		else
		{	
			rear->next= ptr;
			ptr->next = NULL;
			rear = ptr;
		}
		cout<<"Data Inserted \n";
		
	
		char ch;
		cout<<"Do you want to enter more data[y,n] : ";
		cin>>ch;
		if(ch=='n'||ch=='N')
		break;	
	}
}

void remove()
{ while(1)
	{
		if(rear == NULL)
		{
			cout<<"UNDERFLOW ERROR";
			getch();
			break;
		}
		
		ptr = front;
		if(front == rear)
		{	
			front = NULL;
			rear = NULL;
		}
		else
		{
			front=front->next;
		}
		int temp = ptr->info;
		delete(ptr);
		
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
	front = NULL;
	rear = NULL;
	ptr = NULL;	
	
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
			case 1 : insert();
				break;
			case 2 : remove();
				break;
			case 3 : display();
					break;	
		}
	}
}