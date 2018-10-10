#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct node{
	
	node *next;
 	int data;
};

node *end=NULL;
node *start;

void push(int n)
{
	if(end==NULL)
	{
		start=new node;
		start->data=n;
		start->next=NULL;
		end=start;
	}
	else{
		node *ptr=new node;
		ptr->data=n;
		ptr->next=NULL;
		end->next=ptr;
		end=ptr;
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
	push(3);
	push(2);
	display();
}