#include<iostream.h>
#include<stdio.h>

struct node 
{
	node *prev;
	int data;
	node *next;
};

node *head=NULL;

void insertinempty(int x)
{
	if(head==NULL)
	{node *ptr=new node;
	ptr->prev=NULL;
	ptr->data=x;
	ptr->next=NULL;
	head=ptr;
	}
}

void insertatbeg(int x)
{
	node *ptr=new node;
	ptr->data=x;

	if(head!=NULL)
	{
	ptr->prev=NULL;
	head->prev=ptr;
	ptr->next=head;
	head=ptr;
	}
}

void insertatend(int x)
{
	node *ptr=new node;
	ptr->data=x;
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=ptr;
	ptr->prev=temp;
	ptr->next=NULL;
	
}

void displayfrombeg()
{
	node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
} 

void displayfromend()
{
	node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->prev;
	}
}

int main()
{
	insertinempty(4);
	insertatbeg(3);
	insertatend(5);	
	displayfrombeg();
	displayfromend();
	
}