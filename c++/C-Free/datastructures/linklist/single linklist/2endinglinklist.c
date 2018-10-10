#include<iostream>
using namespace std;
struct node{
	
	int data;
	struct node *next;
};

typedef struct node NODE;

NODE *end=NULL;

int main()
{	NODE *start;         
	while(1)
	{	int a;
		printf("enter the data");
		scanf("%d",&a);
	if(end==NULL)
	{
	start=(NODE*)malloc(sizeof(NODE));
	start->data=a;
	start->next=NULL;
	end=start;}
	else
	{
	NODE *temp=(NODE*)malloc(sizeof(NODE));
	temp->data=a;
	temp->next=NULL;
	end->next=temp;
	end=temp;
	}
	char ch;
	printf("do u want to eneter more chary/n");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='n')
	break;
		
	}
	NODE *temp1=start;
	while(temp1!=NULL)
	{
		printf("%d",temp1->data);
		temp1=temp1->next;
	}
	
	
	
	
	
}
