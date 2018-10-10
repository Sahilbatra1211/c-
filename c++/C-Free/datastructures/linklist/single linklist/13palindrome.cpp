// to check whether a series is a palindrome or not
#include<iostream.h>
#include<conio.h>
struct node
{
	node *next;
	int data;
	
};

node *end=NULL;
node *start;
node *end2;

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

void reverse()
{
	node *prev=NULL;
	node *current=start;
	
	while(current!=NULL)
	{
		node *temp=current->next;
		current->next=prev;
		prev=current;
		current=temp;
		
	}
	end2=prev;
}
void palindrome()
{	int flag=1;
	while(start!=NULL)
	{
		if(start->data!=end2->data)
		{
			cout<<"not a palindrome";
			flag=0;
			break;
		}
		start=start->next;
		end2=end2->next;
	}
	if(flag==1)
	{
		cout<<"palindrome";
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
	push(2);
	push(1);
	display();
	reverse();
	palindrome();
	
		
}