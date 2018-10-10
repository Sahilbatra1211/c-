//circular linklist
#include<iostream.h>
#include<conio.h>

struct node 
{
	int data;
	node *next;
	
};

node *end=NULL;

void emptylist(int a)
{
	if(end==NULL)
	{
		end=new node;
		end->data=a;
		end->next=end;
	}
}



void insertionatbeg(int n)
{
	if(end==NULL)
	{
		cout<<"first make list";	
	}
	else
	{
		node *ptr=new node;
		ptr->data=n;
		ptr->next=end->next;
		end->next=ptr;
	}
}

void insertionatend(int x)
{
	if(end==NULL)
	{
		cout<<"first create list";
	}
	else
	{
		node *temp=new node;
		temp->data=x;
		temp->next=end->next;
		end->next=temp;
		end=temp;
	}
	
}

void insertioninbetween(int n,int x)
{
	if(end==NULL)
	{
		cout<<"first make list";
	}
	else
	{
		node *temp=end;
		
		for(int i=1;i<n;i++)
		{
			temp=temp->next;
		}
		node *ptr=new node;
		ptr->data=x;
		ptr->next=temp->next;
		temp->next=ptr;
		
	}
}
void deletedata(int y)
{
	node *head=end->next;
	node *current=head;
	node *prev;
	
	while(current->data!=y)
	{
		prev=current;
		current=current->next;
	}	
	if(current->next==head)				//if it is the only node
	{
		head=NULL;
		delete(current);
		end=head;
		return;
		
	}
	
	if(current==head)  			 // if it is the first node we will take prev to end
	{	prev=current;
		while(prev->next!=head)
		{
			prev=prev->next;
		}
		head=current->next;
		prev->next=current->next;
		delete(current);
		
		
	}
	else if(current->next==head)
	{	
		prev->next=head;
		delete(current);
		end=prev;
		
	}
	else{
		prev->next=current->next;
		delete(current);
	}
	
}

void display()
{
	node *temp=end->next;
	if(end!=NULL)
	{
		do
		{
			cout<<temp->data;
			temp=temp->next;
		}
		while(temp!=end->next);
	}
	
}
int main()
{	
	emptylist(3);
	insertionatbeg(2);
	insertionatbeg(1);
	insertionatend(4);
	insertioninbetween(2,5);
	deletedata(3);					//4 ni delete ho ra check
	
	
	display();	
	
}