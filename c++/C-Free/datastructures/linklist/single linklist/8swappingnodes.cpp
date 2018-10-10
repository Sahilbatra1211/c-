//swapping two nodes in alinklist
#include<iostream.h>
#include<conio.h>

struct node
{
	node *next;
	int data;
};

node *end=NULL;
node * start;


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
void swappingnodes(int a,int b)
{
	
	node *preva=NULL,*currenta=start,*prevb=NULL,*currentb=start;
	while(currenta && currenta->data!=a)
	{
		preva=currenta;
		currenta=currenta->next;
	}
	while(currentb && currentb->data!=b)
	{
		prevb=currentb;
		currentb=currentb->next;
	}
	
	if(preva!=NULL)
	{
		preva->next=currentb;
	}
	else{
		start=currentb;
	}
	if(prevb!=NULL)
	{
		prevb->next=currenta;
	}
	else{
		start=currenta;
	}
	
	node *ptr=currenta->next;
	currenta->next=currentb->next;
	currentb->next=ptr;
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
	push(5);
	
	display();
	
	swappingnodes(2,4);
	
	display();
}