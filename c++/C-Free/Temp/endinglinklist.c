#include<iostream.h>
struct node{
	int data;
	struct node *next;
};

typedef struct node NODE;

NODE *start=NULL;
NODE *end=NULL;

int main()
{	
	
while(1)
{
	int a;
	scanf("%d",&a);
NODE *temp=(NODE*)malloc(sizeof(NODE));
	temp->data=a;
	temp->next=NULL;
	
	if(end==NULL)
	{
		end->next=temp;
		start=end;
		
	}
	else{
		end->next=temp;
		end=temp;
	}
	
	printf("do u want to enter more no");
	char ch;
	fflush(stdin);
	scanf("%c",&ch);
	
	if(ch=='n')
	{
	break;	
	}
} 

while(1)
{
	NODE *temp1=start;
	while(temp1->next!=NULL)
	{
		printf("%d",temp1->data);
		
	}
}
}