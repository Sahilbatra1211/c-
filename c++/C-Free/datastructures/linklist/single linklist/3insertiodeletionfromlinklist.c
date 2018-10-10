//inserting an element at nth position
#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
typedef struct node NODE;
NODE *end=NULL;
NODE *start;

void insert()

{	int a;
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
void insertatn()
	{
		int n;
		printf("enter the pos ");
		scanf("%d",&n);
		int a;
	printf("enter data");
	scanf("%d",&a);
	
		NODE *ptr=(NODE*)malloc(sizeof(NODE));
		ptr->data=a;
		ptr->next=NULL;
		
		if(n==1)
		{
		ptr->next=start;
		start=ptr;	
		}
		else{
		NODE *temp2=start;
		int i;
		for( i=0;i<n-2;i++)
		{	
			temp2=temp2->next;
			
		}
		ptr->next=temp2->next;
		temp2->next=ptr;
		}
	}
void deleteatn()
{	int n;
		printf("enter the pos ");
		scanf("%d",&n);
		int a;
	printf("enter data");
	scanf("%d",&a);

	if(n==1)
	{
		NODE *ptr2;
		ptr2=start;
		start=ptr2->next;
		free(ptr2);
		
	}
	else
	{
	NODE* ptr=start;
	int i;
	for( i=0;i<n-2;i++)
	{
		ptr=ptr->next;
	}
	NODE *temp=ptr->next;
	ptr->next=temp->next;
	free(temp);
	}
	
}

int main()
{
	printf("exit(0)\ninsert:(1)\ndisplay(4)\ninsert at n(3)\ndelete at n:(2)");
	while(1)
	{
		
	
	int z;
	scanf("%d",&z);
	switch(z)
	{	case 0:exit(0);
		break;
		case 1:insert();
		break;
		case 2:deleteatn();
		break;
		case 3:insertatn();
		break;
		case 4:display();
		break;
	}
	
	}
}