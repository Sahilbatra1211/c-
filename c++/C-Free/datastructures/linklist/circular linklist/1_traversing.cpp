//circular linklist
//application-Useful for implementation of queue. Unlike this implementation, we don’t need to maintain two
// pointers for front and rear if we use circular linked list. We can maintain a pointer to the last inserted
// node and front can always be obtained as next of last.

//traversing of circular linklist
#include<iostream.h>
#include<conio.h>

struct node 
{
	int data;
	node *next;
};

void display()
{
	node *temp=start;
	
	if(start!=NULL)
	{
		do
		{
			cout<<temp->data;
			temp=temp->next;
		}
		while(temp!=start);	
	}
	
}

