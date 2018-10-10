//pairwise swap a linklist
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

void pairwiseswap()
{	
	node *current=start;
	node *next2;
	next2=current->next;
		current->next=next2->next;
		next2->next=current;
		current=current->next;
		start=next2;
	while(current->next)
	{	node *next3=new node;
		next3=current->next;
		current->next=next3->next;
		next3->next=current;
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
	display();
	pairwiseswap();
	display();
}