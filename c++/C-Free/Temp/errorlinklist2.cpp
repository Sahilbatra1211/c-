#include<iostream.h>

struct node{
	int info;
	node *next;
	
}*top,*ptr;


void push()
{
	int v;
	
	while(1)
	{
		cout<<"enter the value";
		cin>>v;
		
		if(top=NULL)
		{
			top=new node;
			top->info=v;
			top->next=NULL;
			
		}
		else{
			ptr=new node;
			ptr->next=top;
			ptr->info=v;
			top=ptr;
			
		}
		cout<<"do u want to enetr more? y/n";
		char ch;
		cin>>ch;
		if(ch=='n')
		{
			break;
		}
		
		}
	
}

void pop()
{ while(1)
{
	

	if(top=NULL)
	{
		cout<<"underflow error";
		break;
	}
	
	ptr=top;
	int temp=ptr->info;
	top=top->next;
	
	cout<<"data popped "<<temp;
	delete(ptr);
	
	cout<<"do u pop more";
	char d;
	if(d=='n')
	break;
}
}
void display()
{
	node *ptr2;
	while(ptr2!=NULL)
	{
		cout<<ptr2->next;
	ptr2=ptr2->next;
	}
}
int main()
{
	top=NULL;
	ptr=NULL;
	
	while(1)
	{
		cout<<"exit=0,push-1,pop-2,display-3";
		int f;
		
		cin>>f;
		
		switch(f)
		{
			case 0: exit(0);
			break;
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
		}
	}
}