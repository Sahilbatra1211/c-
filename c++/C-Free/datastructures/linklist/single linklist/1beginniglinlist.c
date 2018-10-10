//beginning linklist-entering the list at beginning

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *head=NULL;

int main()
{
	while(1)
	{printf("enter the data");
	int a;
	scanf("%d",&a);
	NODE *temp=(NODE*)malloc(sizeof(NODE));
	temp->next=head;
	temp->data=a;
	head=temp;
	printf("dou want to insert morey/n");
	
	char ch;
	fflush(stdin);
	scanf("%c",&ch);
	if(ch=='n')
	{
		break;
	}
	}
	
		NODE *temp1=head;
	while(1)
	{	if(temp1==NULL)
	{
		break;
	}	
	
		printf("%d",temp1->data);
		temp1=temp1->next;
		
	}
	printf("sahil");
}