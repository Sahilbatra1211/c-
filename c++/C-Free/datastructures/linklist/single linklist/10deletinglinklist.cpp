//deleting a linklist
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

void deletelinklist()
{
	node *temp=start;
	node *next;
	while(temp!=NULL)
	{
		next=temp->next;
		
		free(temp);	
		temp=next;
	}
	start=NULL;
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
	deletelinklist();
	
	
	display();
}