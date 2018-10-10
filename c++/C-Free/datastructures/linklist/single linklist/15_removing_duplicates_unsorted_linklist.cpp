//removing duplicate from unsorted linklist
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

void display()
{
	node *temp=start;
	
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}

void removeduplicate()
{	
	node *ptr1=start;
	node *ptr2=start;
	while(ptr1->next)
	{	
		ptr2=ptr1;
		node *prev=ptr2;
		node *current=ptr2->next;
		while(current!=NULL)
		{	
			if(current->data==ptr1->data)
			{
				prev->next=current->next;
				current=current->next;
				continue;
				
			}
			current=current->next;
			prev=prev->next;
		}
		ptr1=ptr1->next;
	}
	
}

int main()
{
	push(1);
	push(2);
	push(1);
	push(4);
	display();
	removeduplicate();
	display();
	
}