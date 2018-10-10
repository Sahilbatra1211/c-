
//intersection of two sorted linklist usning recurssion
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
	;
struct Node *sortedIntersect(struct Node *a, struct Node *b)
{
    /* base case */
    if (a == NULL || b == NULL)
        return NULL;
 
    /* If both lists are non-empty */
 
    /* advance the smaller list and call recursively */
    if (a->data < b->data)
        return sortedIntersect(a->next, b);
 
    if (a->data > b->data)
        return sortedIntersect(a, b->next);
 
    // Below lines are executed only when a->data == b->data
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    temp->data = a->data;
 
    /* advance both lists and call recursively */
    temp->next = sortedIntersect(a->next, b->next);
    return temp;
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
	node *temp1=head;
	node *temp2=head2;


intersectionoftwolinklist(temp1,temp2);
	display();

}