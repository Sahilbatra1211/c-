//printing the linklist usning recurssion 
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *end=NULL;


NODE* insert()
{	NODE *start;

	int a;
	printf("enter data");
	scanf("%d",&a);
	

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
	
	return(start);	
}
void displayusingrecc(NODE *temp)
{	
	if(temp==NULL)
	{
		exit(0);
	}
	printf("%d",temp->data);
	displayusingrecc(temp->next);	
}
int main()
{
	NODE *start;
	start=insert();
	start=insert();
	start=insert();
	start=insert();
	NODE *temp=start;
	displayusingrecc(temp);
}