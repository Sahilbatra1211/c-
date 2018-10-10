//removing duplicate from sorted linklist
#include<iostream.h>
#include<stdio.h>
#include<conio.h>

struct node
{
	node *next;
	int data;
	
};

node *end=NULL;
node *start;
int count=0;

void push(int n)
{
	if(end==NULL)
	{	start=new node;
		start->data=n;
		start->next=NULL;
		end=start;
	}
	else{
		node *temp=new node;
		temp->data=n;
		temp->next=NULL;
		end->next=temp;
		end=temp;
	}	
}
void removingduplicate()
{	node *current=start;
	while(current->next)
	{	
		node *ptr=current->next;
		if(current->data==ptr->data)
		{
			current->next=ptr->next;
			continue;
		}
		current=current->next;
	}
	
}


void display()
{
	node *temp=start;
	
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}



int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	push(4);
	push(4);
	push(5);
	push(6);
	
	
	display();
	removingduplicate();
	display();
	
}