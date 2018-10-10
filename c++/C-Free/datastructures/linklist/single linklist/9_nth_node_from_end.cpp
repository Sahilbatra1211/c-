//printing nth node from end of a linklist
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
void length()
{
	node *temp=start;

	while(temp!=NULL)
	{
	count++;
	temp=temp->next;
	}
	cout<<"\n"<<count;
}

void nodefromend(int n)
{
	node *temp=start;
	int a=count-n+1;
	for(int i=1;i<a;i++)
	{
		temp=temp->next;
	}
	cout<<"\n"<<temp->data;
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
	length();
	nodefromend(2);
}