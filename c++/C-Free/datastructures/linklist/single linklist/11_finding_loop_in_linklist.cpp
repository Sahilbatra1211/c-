//finding a loop in a linklst by floyd's method 
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
int findingloop()
{
	node *slow=start;
	node *fast=start;
	
	while(slow && fast && fast->next)
	{
		slow=slow->next;
		fast=fast->next->next;
		
		if(slow==fast)
		{
			cout<<"loop found";
			return 1;
			
		}
		
		return 0;
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
{	 int a;

	push(1);
	push(2);
	push(3);
	push(4);
	display();
	a=findingloop();
	if(a==0)
	{
		cout<<"loop not found";
	}
}