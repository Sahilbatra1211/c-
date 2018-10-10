#include<iostream>
using namespace std;

struct node 
{
	node *next;
	int data;
	
};

node *head=NULL;
node *temp;
void insert()
{	
	cout<<"enter the data";
	int a;
	cin>>a;

	if(head==NULL)
	{	temp=new node();
		temp->next=NULL;
		temp->data=a;
		head=temp;
	}
	else
	{ node *temp2=new node();
	  temp2->data=a;
	  temp2->next=NULL;
	  temp->next=temp2;
	  temp=temp2;
		
	}
	
}
node *head2=NULL;
node *temp3;
void insert2()
{	
	cout<<"enter the data";
	int a;
	cin>>a;

	if(head2==NULL)
	{	temp3=new node();
		temp3->next=NULL;
		temp3->data=a;
		head2=temp3;
	}
	else
	{ node *temp2=new node();
	  temp2->data=a;
	  temp2->next=NULL;
	  temp3->next=temp2;
	  temp3=temp2;
		
	}
}
void mergetwolinklist()
{
	node *first=head;
	node *second=head2;
	node *sort;
		if(first->data<=second->data)
		{
			sort=first;
			first=sort->next;
		}
		else
		{
			sort=second;
			second=sort->next;
		}	
		node *flag=sort;

	
	while(first && second)
	{	
		if(first->data<=second->data)
		{
			sort->next=first;
			sort=sort->next;
			first=first->next;
		}
		else
		{
			sort->next=second;
			sort=sort->next;
			second=second->next;
		}
		
	}
	if(first==NULL)sort->next=second;
	if(second==NULL)sort->next=first;
	head=flag;
	
}
void display()
{
	node *temp2=head;
	
	while(temp2!=NULL)
	{	
		cout<<temp2->data;
		temp2=temp2->next;
	}
}
void display2()
{
	node *temp2=head2;
	
	while(temp2!=NULL)
	{	
		cout<<temp2->data;
		temp2=temp2->next;
	}
}

int main()
{

	
	insert();
	insert();
	insert();

	insert2();
	insert2();
	insert2();


	mergetwolinklist();
	display();

}