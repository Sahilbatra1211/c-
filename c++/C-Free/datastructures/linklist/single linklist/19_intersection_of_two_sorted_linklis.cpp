//intersection of two sorted linklist
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
void intersectionoftwolinklist()
{
	node *temp1=head;
	
	
	while(temp1!=NULL)
	{	
		node *temp2=head2;
		while(temp2!=NULL)
		{	
			if(temp1->data==temp2->data)
			{
				cout<<"intersection identified";
			}
			temp2=temp2->next;
			
		}
		temp1=temp1->next;
	}
	
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


int main()
{

	
	insert();
	insert();
	insert();

	insert2();
	insert2();
	insert2();


intersectionoftwolinklist();
	display();

}