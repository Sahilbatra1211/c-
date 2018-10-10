#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *end=NULL;
NODE *start;

void insert(int a)

{	

	

if(end==NULL)
	{	start=(NODE*)malloc(sizeof(NODE));
		start->data=a;
		start->next=NULL;
		end=start;
	}
	else
	{NODE *temp=(NODE*)malloc(sizeof(NODE));
	temp->data=a;
	temp->next=NULL;
	end->next=temp;
	end=temp;
	}	
}
void display()
{
	NODE *temp1=start;
	while(temp1!=NULL)
	{
		printf("%d",temp1->data);
		temp1=temp1->next;
	}
}
void reversing()
{	int i;
	NODE *temp1=start;
	NODE *prev=NULL;
	while(temp1!=NULL)
	{NODE *Next=temp1->next;
	temp1->next=prev;
	prev=temp1;
	temp1=Next;
	}
start=prev;
			

	
	
}
int main()
{
	insert(6);
	insert(5);
	insert(4);
	insert(3);
	insert(2);
	insert(1);
	display();
	reversing();
	display();
}